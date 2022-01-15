import os
import jieba
import numpy as np
from numpy.linalg import norm
from gensim.models import word2vec


path = './数据处理相关文件/Dataset/test'
labels = []
vocab_size = 1024  # one-hot编码长度
divide = [' ', '\n', '{', '}', '(', ')', ',', ';', '"', ':', 'cout', 'return', 'main']

Workers = 6
Size = 64
MinCount = 1
Window = 10
Sample = 0.1


def find_val(x, li):
    for l in li:
        if x == l[0]:
            return l[1]
    return False


def sentence_vector(s, model):
    s = ' '.join(jieba.cut(s)).split(' ')
    words = []
    for word in s:
        if word not in divide:
            words.append(word)
    v = np.zeros(Size)
    for word in words:
        if word in model:
            v += model[word]
    v /= len(words)
    return v


def vector_similarity(s1, s2, model):
    v1, v2 = sentence_vector(s1, model), sentence_vector(s2, model)
    return np.dot(v1, v2) / (norm(v1) * norm(v2))  # 计算余弦相似度


def GetData():
    docs = []
    file_list = os.listdir(path)
    for floder_name in file_list:
        floder_path = os.path.join(path, floder_name)
        floder_list = os.listdir(floder_path)
        for file in floder_list:
            file_path = os.path.join(floder_path, file)
            with open(file_path, encoding='UTF-8', errors='ignore') as cf:
                doc = cf.read()
                docs.append(doc)
    return docs


docs = GetData()
model = word2vec.Word2Vec(docs, workers=Workers, size=Size, min_count=MinCount, window=Window, sample=Sample)

# 新建文件，用于存储数据，并赋予写权限
newfile = open("./Resultw2v/result_3.txt", 'w')
file_list = os.listdir(path)
num = 1
for floder_name in file_list:
    floder_path = os.path.join(path, floder_name)
    floder_list = os.listdir(floder_path)
    print(num, end=' ')
    num += 1
    for file in floder_list:
        file_path = os.path.join(floder_path, file)
        with open(file_path, encoding='UTF-8', errors='ignore') as cf:
            doc = cf.read()

            file_list_2 = os.listdir(path)
            for floder_name_2 in file_list_2:
                floder_path_2 = os.path.join(path, floder_name_2)
                floder_list_2 = os.listdir(floder_path_2)
                for file_2 in floder_list_2:
                    file_path_2 = os.path.join(floder_path_2, file_2)
                    with open(file_path_2, encoding='UTF-8', errors='ignore') as cf_2:
                        doc_2 = cf_2.read()
                        # 计算file和file_2两者间的相似度，并输出
                        res = str(vector_similarity(doc, doc_2, model))

                        if floder_path == floder_path_2:
                            # newfile.write(file_path+"    "+file_path_2+"    "+res+"    "+'1\n')
                            newfile.write(res + "    " + '1\n')
                        else:
                            # newfile.write(file_path+"    "+file_path_2+"    "+res+"    "+'0\n')
                            newfile.write(res + "    " + '0\n')

newfile.close()