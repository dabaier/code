from __future__ import print_function


import numpy
from sklearn.metrics import f1_score, accuracy_score
from sklearn.multiclass import OneVsRestClassifier
from sklearn.preprocessing import MultiLabelBinarizer

#sklearn.multiclass.OneVsRestClassifier模块通过将多分类问题化为二分类问题来处理
class TopKRanker(OneVsRestClassifier):
    def predict(self, X, top_k_list):
        ##numpy.asarray将输入数据（列表的列表，元组的元组，元组的列表等）转换为矩阵形式
        #predict_proba返回的是一个 n 行 k 列的数组， 第 i 行 第 j 列上的数值是模型预测 第 i 个预测样本为某个标签的概率，并且每一行的概率和为1。
        probs = numpy.asarray(super(TopKRanker, self).predict_proba(X))
        all_labels = []
        for i, k in enumerate(top_k_list):
            probs_ = probs[i, :]
            labels = self.classes_[probs_.argsort()[-k:]].tolist()
            probs_[:] = 0
            probs_[labels] = 1
            all_labels.append(probs_)
        return numpy.asarray(all_labels)


class Classifier(object):

    def __init__(self, embeddings, clf):
        self.embeddings = embeddings
        self.clf = TopKRanker(clf)#即TopKRanker(LogisticRegression())
        self.binarizer = MultiLabelBinarizer(sparse_output=True)#二进制输出数组,预处理数据为支持的多标签形式
        #在可迭代的可迭代对象和多标签格式之间进行转换，尽管集或元组的列表对于多标签数据来说是非常直观的格式，但处理起来很麻烦。
        # 该转换器在这种直观格式和支持的多标签格式之间进行转换：一个（样本x类）二进制矩阵，指示类标签的存在。
        #如果需要以CSR稀疏格式输出二进制数组，则设置sparse_output为true

    def train(self, X, Y, Y_all):
        self.binarizer.fit(Y_all)#数据预处理，转换成计算机容易识别的语言
        X_train = [self.embeddings[x] for x in X]
        Y = self.binarizer.transform(Y)
        self.clf.fit(X_train, Y)

    """
    1.有监督学习的算法fit(x,y)传两个参数。无监督学习的算法是fit(x)，即传一个参数，比如降维、特征提取、标准化。
    2.fit_transform是fit和transform的组合。是将fit和transform合并，一步到位的结果。
    3.fit_transform()的作用就是先拟合数据，然后转化它将其转化为标准形式。
    4.tranform()的作用是通过找中心和缩放等实现标准化。
    5.注意这是数据预处理中的方法：
    Fit(): Method calculates the parameters μ and σ and saves them as internal objects.
    解释：简单来说，就是求得训练集X的均值啊，方差啊，最大值啊，最小值啊，这些训练集X固有的属性。可以理解为一个训练过程
    Transform(): Method using these calculated parameters apply the transformation to a particular dataset.
    解释：在Fit的基础上，进行标准化，降维，归一化等操作（看具体用的是哪个工具，如PCA，StandardScaler等）。
    Fit_transform(): joins the fit() and transform() method for transformation of dataset.
    解释：fit_transform是fit和transform的组合，既包括了训练又包含了转换。

    """
    def evaluate(self, X, Y):
        top_k_list = [len(l) for l in Y]
        Y_ = self.predict(X, top_k_list)
        Y = self.binarizer.transform(Y)
        averages = ["micro", "macro", "samples", "weighted"]
        results = {}
        for average in averages:
            results[average] = f1_score(Y, Y_, average=average)
        results['acc'] = accuracy_score(Y,Y_)
        print('-------------------')
        print(results)
        return results
        print('-------------------')

    def predict(self, X, top_k_list):
        X_ = numpy.asarray([self.embeddings[x] for x in X])
        Y = self.clf.predict(X_, top_k_list=top_k_list)
        return Y

    def split_train_evaluate(self, X, Y, train_precent, seed=0):
        state = numpy.random.get_state()#获取随机生成器 np.random的状态

        training_size = int(train_precent * len(X))
        numpy.random.seed(seed)
        #返回一个numpy.arange(len(X))生成的随机序列，就是顺序是随机的
        shuffle_indices = numpy.random.permutation(numpy.arange(len(X)))

        X_train = [X[shuffle_indices[i]] for i in range(training_size)]
        Y_train = [Y[shuffle_indices[i]] for i in range(training_size)]

        X_test = [X[shuffle_indices[i]] for i in range(training_size, len(X))]#到len(x)停止
        Y_test = [Y[shuffle_indices[i]] for i in range(training_size, len(X))]

        self.train(X_train, Y_train, Y)
        numpy.random.set_state(state)
        return self.evaluate(X_test, Y_test)


def read_node_label(filename, skip_head=False):
    fin = open(filename, 'r')
    X = []
    Y = []
    while 1:
        if skip_head:
            fin.readline()
        l = fin.readline()
        if l == '':
            break
        vec = l.strip().split(' ')
        X.append(vec[0])
        Y.append(vec[1:])
    fin.close()
    return X, Y
