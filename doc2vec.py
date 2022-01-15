import os
import gensim
import jieba
import numpy as np
from gensim.models.doc2vec import Doc2Vec
from numpy.linalg import norm

TaggededDocument = gensim.models.doc2vec.TaggedDocument
stop = ['', '/', '\n', '{', '}', '#', '(', ')', ',', '<', '>', ';', '"', ':', 'main', 'cout', 'return']

def get_datasets(file_path,file):
    x_train = []
    label = file.split('.')[0]  # split()返回的是一个数组   [0]是数组的第一个元素
    with open(file_path, encoding='UTF-8') as cf:
        docs = cf.read()
        word_list = ' '.join(jieba.cut(docs)).split(' ')
        words = []
        for word in word_list:
            if word not in stop:
                words.append(word)
        document = TaggededDocument(words, tags=[str(label)])
        x_train.append(document)
    return x_train,words


def train(x_train, size=64, epoch_num=1):
    model = Doc2Vec(x_train, min_count=1, window=10, vector_size=size, sample=1e-3, negative=5, workers=4)
    model.train(x_train, total_examples=model.corpus_count, epochs=70)
    return model


def vector_similarity(v1,v2):
    return np.dot(v1, v2) / (norm(v1) * norm(v2)) # 计算余弦相似度



if __name__ == '__main__':
    path = 'E:/graph_embedding/数据处理相关文件/Dataset/test'
    res_file = open("./Resultd2v/result_2.txt", 'w')
    file_list = os.listdir(path)
    for floder_name in file_list:
        floder_path = os.path.join(path, floder_name)
        floder_list = os.listdir(floder_path)
        for file in floder_list:
            file_path = os.path.join(floder_path, file)
            x_train,words = get_datasets(file_path,file)
            #v1 = train(x_train).docvecs.vectors_docs.reshape(64)
            model = train(x_train)
            v1 = model.infer_vector(words)
            file_list_2 = os.listdir(path)
            for floder_name_2 in file_list_2:
                floder_path_2 = os.path.join(path, floder_name_2)
                floder_list_2 = os.listdir(floder_path_2)
                for file_2 in floder_list_2:
                    file_path_2 = os.path.join(floder_path_2, file_2)
                    x_train_,words_ = get_datasets(file_path_2, file_2)
                    #v2 = train(x_train_).docvecs.vectors_docs.reshape(64)
                    model1 =  train((x_train_))
                    v2 = model1.infer_vector(words_)
                    # 计算file和file_2两者间的相似度，并输出
                    res = str(vector_similarity(v1, v2))

                    if floder_path == floder_path_2:
                        res_file.write(file_path + "  " + file_path_2 + "  " + res + "  " + '1\n')
                    else:
                        res_file.write(file_path + "  " + file_path_2 + "  " + res + "  " + '0\n')
    res_file.close()

