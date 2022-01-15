from collections import Counter
from itertools import chain
import time
import random
import numpy as np

class Node:
    """
    define a node class to represent a node. The properties of the node include its value, priority, left child,
    right child, and code.
    """
    def __init__(self, value=None, priority=None, left_child=None, right_child=None, code=''):
        self.value = value
        self.priority = priority
        self.left_child = left_child
        self.right_child = right_child
        self.code = code
        self.vector = None


def generate_queue(nodes):
    nodes = [node for node in nodes]
    if len(nodes) > 0:
        return sorted(nodes, key=lambda x:x.priority, reverse=True)
    else:
        return []


class NodeQueue:
    """
    To generate, and update a queue of nodes according their priority.
    nodes: list, [node1, node2,...], the elements of nodes(node1, node2,...) are the instances of class Node.
    """
    def __init__(self, nodes):
        self.queue = generate_queue(nodes)
        self.size = len(self.queue)

    def add(self, node):
        """
        add a node to the queue
        :param node: node should be the instance of class Node.
        :return:
        """
        if len(self.queue) == 0:
            self.size = 1
            self.queue = [node]
        else:
            for index, n_ in enumerate(self.queue):
                if node.priority >= n_.priority:
                    self.queue = self.queue[:index] + [node] + self.queue[index:]
                    self.size += 1
                    break

    def remove(self, node):
        """
        remove a node to the queue.
        :param node: the node can be a instance of class Node or the value of the instance.
        :return:
        """
        if len(self.queue) == 0:
            return []
        elif isinstance(node, Node):
            for index, n_ in self.queue:
                if n_.value == node.value:
                    self.queue.remove(self.queue[index])
                    self.size -= 1
        else:
            for index, n_ in self.queue:
                if n_.value == node:
                    self.queue.remove(self.queue[index])
                    self.size -= 1

    def pop(self):
        if self.size > 0:
            self.size -= 1
            return self.queue.pop()
        else:
            return []


class HuffmanTree:
    """
    To generate, update a huffman tree. And also encode or decode an obj.
    obj: ((value, priority)...)
    """
    def __init__(self, obj, embedding_dim=300):
        self.Queue = NodeQueue([Node(value, priority) for (value, priority) in obj])
        self.dict_v2c = {}
        self.dict_c2v = {}
        self.tree = self.generate_tree()
        self.embedding_dim = embedding_dim

    def generate_tree(self):
        Queue = self.Queue
        while Queue.size > 1:
            node_1 = Queue.pop()
            node_2 = Queue.pop()
            new_node = Node(None, node_1.priority+node_2.priority, node_1, node_2)
            Queue.add(new_node)
        return Queue.queue[0]

    def _update_dict(self, head, code):
        """
        update the code of all nodes in the huffman tree.
        Initialize the value of Node.vector at the same time.
        :return:
        """
        if head:
            self._update_dict(head.left_child, code+'1')
            self._update_dict(head.right_child, code+'0')
            head.code += code
            head.vector = np.random.standard_normal((self.embedding_dim,))
            if head.value:
                self.dict_c2v[head.code] = head.value
                self.dict_v2c[head.value] = head.code

    def update_dict(self):
        self._update_dict(self.tree, '')

    def encode(self, obj):
        """
        encode an obj to huffman code.
        :param obj: should be an list or array contains the elements of the obj in sequence.
        :return:
        """
        codes = ''
        for obj_ in obj:
            codes += self.dict_v2c[obj_]
        return codes

    def decode(self, codes):
        code = ''
        obj = []
        for c in codes:
            code += c
            if code in self.dict_c2v.keys():
                obj.append(self.dict_c2v[code])
                code = ''
        return obj


class SkipGram:
    """
    The Skip Gram Model. Given the text, this class will give the embeddings of every element in the text.
    The text data will firstly be input into fit function.
    dimension: the dimensionality of word embeddings
    window: the words number that will be consider around a given word. For the start and end of the text, the words
    number is not equal enough to windows, then the lacked words will be neglected.
    sampling: the sampling method to update the parameters. 'huffman' will apply the Huffman Tree for Hierarchical
    Softmax. 'negative' will apply negative sampling.
    neg_sampling_num: When sampling is 'negative', a negative sampling set of all words will be generated. neg_sampling_num
    define the number of negative samples of every word.
    learning_rate: the speed of learning.
    skip_ratio: for some words with high frequency, the redundant training of them will not get better embeddings while
    cost extra time. These words that exceed skip_ratio will not be trained every meeting. Instead, they will be skipped
    in training with probability 1 - (skip_ratio / f(w)) ^ 1/2, where f(w) = Count(w) / Count(all words)
    min_count: the words with frequency lower than min_count will be neglected while training.
    min_learning_rate: the minimum value of learning rate in updating is min_learning_rate * learning_rate
    update_batch: update the learning rate every time after update_batch words are trained with equation:
    learning_rate_ = leraning_rate * (1 - Count(w_trained) / Count(all words in vocab))
    """
    def __init__(self, dimension=300,
                 window=5,
                 sampling='huffman',
                 neg_sampling_num=10,
                 learning_rate=0.025,
                 min_learning_rate=1e-4,
                 update_batch=10000,
                 skip_ratio=1.0,
                 min_count=5):
        self.dimension = dimension
        self.window = window
        self.sampling = sampling
        self.neg_sampling_num = neg_sampling_num
        self.learning_rate = learning_rate
        self.min_learning_rate = min_learning_rate
        self.update_batch = update_batch
        self.skip_ratio = skip_ratio
        self.min_count = min_count
        self.act = {x: 1.0 / (1 + np.exp(- x / 1000)) for x in range(-8000, 8001, 1)}
        self.fitted = False

    def fit(self, text):
        """
        Fit the text data, get the vocabulary of the whole text. Then randomly initialize the embeddings of every word.
        The embeddings will be stored in a dict formed: {word: embedding, ...}
        :param text: the collects of text, or split words from text. form: [text1, text2, ...] or [[word11, word12, ...],
        [word21, word22, ...], ...]
        :return:
        """
        try:
            text = [t.split() for t in text]
            print("The form of input text is [text1, text2, ...].")
        except AttributeError:
            print("The form of input text is [[word11, word12, ...], [word21, word22, ...]].")
        self.words_counter = [(word, count) for word, count in Counter(chain(*text)).most_common() if count >= self.min_count]
        self.total_num = np.sum([count for _, count in self.words_counter])
        self.skip_prob = {word: 1 - (self.skip_ratio / count * self.total_num) ** 0.5 for word, count in self.words_counter}
        self.embedding = {word: np.random.standard_normal((self.dimension,)) for word, _ in self.words_counter}
        if self.sampling == 'huffman':
            self.huffman_tree = HuffmanTree(self.words_counter, self.dimension)
            self.huffman_tree.update_dict()
        elif self.sampling == 'negative':
            self.neg_table = [count**(4/3) for _, count in self.words_counter]
            total_ = np.sum(self.neg_table)
            self.neg_table = [nt / total_ for nt in self.neg_table]
            tem = 0
            for index, nt in enumerate(self.neg_table):
                tem += nt
                self.neg_table[index] = tem
            self.neg_embedding = {word: np.random.standard_normal((self.dimension,)) for word, _ in self.words_counter}
            self.neg_sets = {word: [self.negative_sampling(word) for i in range(self.neg_sampling_num)]
                             for word, _ in self.words_counter}
        else:
            raise TypeError("Only support sampling method 'negative' and 'huffman', but get {}.".format(self.sampling))
        self.fitted = True

    def negative_sampling(self, w):
        word = w
        while word == w:
            seed = np.random.rand()
            for index, nt in enumerate(self.neg_table):
                if seed < nt:
                    word = self.words_counter[index][0]
                    break
        return word

    def activation(self, x):
        if x <= -8:
            return 0
        elif x < 8:
            index = int(np.ceil(x / 0.001))
            return self.act[index]
        else:
            return 1

    def train(self, text, epochs=100, verbose_step=10):
        """
        train the text and update the embedding of every word.
        :param verbose_step: The interval at which information is displayed
        :param text: the collects of text, or split words from text. form: [text1, text2, ...] or [[word11, word12, ...],
        [word21, word22, ...], ...]
        :param epochs: training times.
        :return:
        """
        if not self.fitted:
            raise NotImplementedError('Please first call "fit" function.')
        try:
            text = [t.split() for t in text]
            print("The form of input text is [text1, text2, ...].")
        except AttributeError:
            text = [list(t) for t in text]
            print("The form of input text is [[word11, word12, ...], [word21, word22, ...]].")
        if self.sampling == 'huffman':
            cumulate_time = 0
            for i in range(epochs):
                start = time.time()
                trained_count = 0
                for t in text:
                    for index, word in enumerate(t):
                        if word in self.embedding.keys():
                            if np.random.rand() >= self.skip_prob[word]:
                                window = np.random.randint(1, self.window+1)
                                neighbors = t[max(0, index-window):index] + t[index+1:index+1+window]
                                neighbors = [n for n in neighbors if n in self.embedding.keys()]
                                for n in neighbors:
                                    epsilon = 0
                                    code = self.huffman_tree.dict_v2c[n]
                                    head = self.huffman_tree.tree
                                    for c in code:
                                        q = np.matmul(head.vector, self.embedding[word])
                                        q = self.activation(q)
                                        g = self.learning_rate * (1 - int(c) - q)
                                        epsilon += g * head.vector
                                        head.vector += g * self.embedding[word]
                                        if c == '1':
                                            head = head.left_child
                                        else:
                                            head = head.right_child
                                    self.embedding[word] += epsilon
                                trained_count += 1
                                if trained_count % self.update_batch == 0:
                                    self.learning_rate = max(self.learning_rate * (1 - trained_count / (self.total_num + 1)),
                                                             self.learning_rate * self.min_learning_rate)
                cumulate_time += time.time() - start
                if i < epochs - 1:
                    if (i + 1) % verbose_step == 0:
                        print("{}/{} - ETA: {:.0f}s.".format(str(i+1).rjust(len(str(epochs))), epochs,
                              cumulate_time / (i + 1) * (epochs - i - 1)))
                else:
                    print("{}/{} - Complete - Cost time: {:.0f}s.".format(str(i+1).rjust(len(str(epochs))), epochs,
                                                                          cumulate_time))
        elif self.sampling == 'negative':
            cumulate_time = 0
            for i in range(epochs):
                start = time.time()
                trained_count = 0
                for t in text:
                    for index, word in enumerate(t):
                        if word in self.embedding.keys():
                            if np.random.rand() >= self.skip_prob[word]:
                                window = np.random.randint(1, self.window + 1)
                                neighbors = t[max(0, index - window):index] + t[index + 1:index + 1 + window]
                                neighbors = [n for n in neighbors if n in self.embedding.keys()]
                                for n in neighbors:
                                    epsilon = 0
                                    neg = n
                                    while neg == n:
                                        neg = random.sample(self.neg_sets[n], 1)[0]
                                    neg_sets = [word, neg]
                                    l_w = [1, 0]
                                    for index, w in enumerate(neg_sets):
                                        q = np.matmul(self.embedding[n], self.neg_embedding[w])
                                        q = self.activation(q)
                                        g = self.learning_rate * (l_w[index] - q)
                                        epsilon += g * self.neg_embedding[w]
                                        self.neg_embedding[w] += g * self.embedding[n]
                                    self.embedding[n] += epsilon
                                trained_count += 1
                                if trained_count % self.update_batch == 0:
                                    self.learning_rate = max(self.learning_rate * (1 - trained_count / (self.total_num + 1)),
                                                             self.learning_rate * self.min_learning_rate)
                cumulate_time += time.time() - start
                if i < epochs - 1:
                    if (i + 1) % verbose_step == 0:
                        print("{}/{} - ETA: {:.0f}s.".format(str(i + 1).rjust(len(str(epochs))), epochs,
                                                             cumulate_time / (i + 1) * (epochs - i - 1)))
                else:
                    print("{}/{} - Complete - Cost time: {:.0f}s.".format(str(i + 1).rjust(len(str(epochs))), epochs,
                                                                          cumulate_time))
        else:
            raise ValueError('Only support sampling "negative" and "huffman", but sampling is "{}."'.format(self.sampling))
