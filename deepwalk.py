import os
from ge import DeepWalk
from sklearn.linear_model import LogisticRegression
import matplotlib.pyplot as plt
import networkx as nx
from numpy.linalg import norm
import pandas as pd
import numpy as np
from keras.layers import Input,Embedding,Lambda
from keras.models import Model
import keras.backend as K
import tensorflow as tf

def new2v_train(traindata,word_size = 64,window = 2,nb_negative = 16,min_count = 1,nb_epoch =100,subsample_t = 1e-5,nb_sentence_per_batch = 20,is_train=True,plot=False):
    # word_size = 128 #词向量维度
    # window = 2 #窗口大小
    # nb_negative = 16 #随机负采样的样本数
    # min_count = 1 #频数少于min_count的词将会被抛弃
    # nb_worker = 4 #读取数据的并发数
    # nb_epoch =100 #迭代次数，由于使用了adam，迭代次数1～2次效果就相当不错
    # subsample_t = 1e-5 #词频大于subsample_t的词语，会被降采样，这是提高速度和词向量质量的有效方案
    # nb_sentence_per_batch = 20
    # 目前是以句子为单位作为batch，多少个句子作为一个batch（这样才容易估计训练过程中的steps参数，另外注意，样本数是正比于字数的。）
    words = {} #词频表
    nb_sentence = 0 #总句子数
    total = 0. #总词频

    for d in traindata:
        nb_sentence += 1
        for w in d:
            if w not in words:
                words[w] = 0
            words[w] += 1
            total += 1
        #if nb_sentence % 10000 == 0:
        #    print (u'已经找到%s篇文章'%nb_sentence)

    words = {i:j for i,j in words.items() if j >= min_count} #截断词频
    id2word = {i+1:j for i,j in enumerate(words)} #id到词语的映射，0表示UNK
    word2id = {j:i for i,j in id2word.items()} #词语到id的映射
    nb_word = len(words)+1 #总词数（算上填充符号0）
    subsamples = {i:j/total for i,j in words.items() if j/total > subsample_t}
    subsamples = {i:subsample_t/j+(subsample_t/j)**0.5 for i,j in subsamples.items()} #这个降采样公式，是按照word2vec的源码来的
    subsamples = {word2id[i]:j for i,j in subsamples.items() if j < 1.} #降采样表
    import numpy as np
    def data_generator(): #训练数据生成器  跳过降采样的词频  生成需要训练的词
        while True:
            x,y = [],[]
            _ = 0
            for d in traindata:
                d = [0]*window + [word2id[w] for w in d if w in word2id] + [0]*window
                r = np.random.random(len(d))
                for i in range(window, len(d)-window):
                    if d[i] in subsamples and r[i] > subsamples[d[i]]: #满足降采样条件的直接跳过
                        continue
                    x.append(d[i-window:i]+d[i+1:i+1+window])
    #
                    y.append([d[i]])

                _ += 1
                if _ == nb_sentence_per_batch:

                    x,y = np.array(x),np.array(y)
                    z = np.zeros((len(x), 1))
    #                 print ([x.shape,y])
                    if x.shape!=(0,) and x.shape[1]==4:
                        yield [x,y],z
                    x,y = [],[]
                    _ = 0

    #
    input_words = Input(shape=(window*2,), dtype='int32')
    input_vecs = Embedding(nb_word, word_size, name='word2vec')(input_words)
    input_vecs_sum = Lambda(lambda x: K.sum(x, axis=1))(input_vecs) #模型，直接将上下文词向量求和

    #构造随机负样本，与目标组成抽样
    target_word = Input(shape=(1,), dtype='int32')
    negatives = Lambda(lambda x: K.random_uniform((K.shape(x)[0], nb_negative), 0, nb_word, 'int32'))(target_word)
    samples = Lambda(lambda x: K.concatenate(x))([target_word,negatives]) #构造抽样，负样本随机抽。负样本也可能抽到正样本，但概率小。

    #只在抽样内做Dense和softmax
    softmax_weights = Embedding(nb_word, word_size, name='W')(samples)
    softmax_biases = Embedding(nb_word, 1, name='b')(samples)
    softmax = Lambda(lambda x:
                        K.softmax((K.batch_dot(x[0], K.expand_dims(x[1],2))+x[2])[:,:,0])
                    )([softmax_weights,input_vecs_sum,softmax_biases]) #用Embedding层存参数，用K后端实现矩阵乘法，以此复现Dense层的功能

    #留意到，我们构造抽样时，把目标放在了第一位，也就是说，softmax的目标id总是0，这可以从data_generator中的z变量的写法可以看出

    model = Model(inputs=[input_words,target_word], outputs=softmax)
    #from keras import optimizers
    #adam = optimizers.adam(0.00005)
    #model.compile(loss='sparse_categorical_crossentropy', optimizer=adam, metrics=['accuracy'])
    model.compile(loss='sparse_categorical_crossentropy', optimizer='adam', metrics=['accuracy'])
    if not is_train:
        return model
    history=model.fit_generator(
                        data_generator(),
                        steps_per_epoch=nb_sentence/nb_sentence_per_batch,
                        epochs=nb_epoch,
                       )
    embeddings = model.get_weights()[0]
    normalized_embeddings = embeddings / (embeddings**2).sum(axis=1).reshape((-1,1))**0.5

    #from keras.utils import plot_model
    #plot_model(model,to_file='model.png')


    if plot:
        import matplotlib.pyplot as plt

        loss = history.history['loss']
        epochs = range(1, len(loss ) + 1)
        plt.title('Loss')
        plt.plot(epochs, loss, 'red', label='Training loss')

        plt.legend()
        plt.show()

        plt.cla()

        loss = history.history['acc']
        epochs = range(1, len(loss ) + 1)

        plt.title('acc')
        plt.plot(epochs, loss, 'red', label='Training acc')
        plt.legend()
        plt.show()
        allx=[]
        ally=[]
        pre=[]
        true=[]
        for i in traindata:
                x=list(next(data_generator()))
                pre.extend (np.argmax(model.predict(x[0]),axis=-1))

        true=[0]*len(pre)

        res真=[]
        for i in true:
            res真.append(" ".join([str(i)]))
        res预测=[]
        for i in pre:
            res预测.append(" ".join([str(i)]))

        import numpy as np
        def micro_f1(sub_lines, ans_lines, split = ' '):
            correct = []
            total_sub = 0
            total_ans = 0
            for sub_line, ans_line in zip(sub_lines, ans_lines):
                sub_line = set(sub_line.split(split))
                ans_line = set(ans_line.split(split))
                c = sum(1 for i in sub_line if i in ans_line) if sub_line != {''} else 0
                total_sub += len(sub_line) if sub_line != {''} else 0
                total_ans += len(ans_line) if ans_line != {''} else 0
                correct.append(c)
            p = np.sum(correct) / total_sub if total_sub != 0 else 0
            r = np.sum(correct) / total_ans if total_ans != 0 else 0
            f1 = 2*p*r / (p + r) if (p + r) != 0 else 0
#             print('total sub:', total_sub)
#             print('total ans:', total_ans)
#             print('correct: ', np.sum(correct), correct)

            print('precision: ', p)
            print('recall: ',r)
            print ("f1:",f1)
#             return f1,p,r
        micro_f1(res真, res预测, split = ' ')
    return normalized_embeddings,word2id


def weighted_average(g,v,id):
    vec = np.zeros(64)
    for word in g.nodes():
        vec += v[id[word]]
    vec /= len(g.nodes())
    return vec


def vector_similarity(v1,v2):
    return np.dot(v1, v2) / (norm(v1) * norm(v2))


def out_result():
    path = 'E:\graph_embedding - 副本\GRAPH'
    res_file = open("E:\graph_embedding\_result5.txt", 'w')
    file_list = os.listdir(path)
    for floder_name in file_list:
        floder_path = os.path.join(path, floder_name)
        floder_list = os.listdir(floder_path)
        for file in floder_list:
            file_path = os.path.join(floder_path, file)
            G = nx.read_gml(file_path)
            s = DeepWalk(G, walk_length=10, num_walks=80, workers=1).sentences
            v, id = new2v_train(s, )
            v1 = weighted_average(G, v, id)
            file_list_2 = os.listdir(path)
            for floder_name_2 in file_list_2:
                floder_path_2 = os.path.join(path, floder_name_2)
                floder_list_2 = os.listdir(floder_path_2)
                for file_2 in floder_list_2:
                    file_path_2 = os.path.join(floder_path_2, file_2)
                    G1 = nx.read_gml(file_path_2)
                    s_ = DeepWalk(G1, walk_length=10, num_walks=80, workers=1).sentences
                    v_, id_ = new2v_train(s_, )
                    v2 = weighted_average(G1, v_, id_)

                    # 计算file和file_2两者间的相似度，并输出
                    res = str(vector_similarity(v1, v2))

                    if floder_path == floder_path_2:
                        res_file.write(file_path + "  " + file_path_2 + "  " + res + "  " + '1\n')
                    else:
                        res_file.write(file_path + "  " + file_path_2 + "  " + res + "  " + '0\n')
    res_file.close()



if __name__ == "__main__":
    """
    num_walks:表示随机游走的时候每个顶点被选取作为初始点的次数
    iter表示的是word2vec对这些游走序列训练的轮次，可以理解成epoch
    walk_length:表示给定初始点后每次随机采样序列出的序列长度在完成随机游走后我们得到一系列游走序列，该序列作为word2vec的输入
    
    
    G = nx.read_gml('E:/graph_embedding/GRAPH/_1_GreatestCommonDivisor/Greatestcommondivisor-1.gml')
    s = DeepWalk(G, walk_length=10, num_walks=80, workers=1).sentences
    v,id = new2v_train(s,)
    weighted_average(G,v,id)
    #print(v[id['C4']])
    """
    out_result()
    # tensorboard - -logdir = ny_log_dir - -host = 127.0.0.1