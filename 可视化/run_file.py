from gen_cfg import GenCfg, CfgToDot
import  re

import numpy as np
from ge import DeepWalk
import networkx as nx
from numpy.linalg import norm

def run_cfg(c_file):
    # 生成cfg
    gcfg = GenCfg(c_file)
    gcfg.gen_cfg()  # 生成
    gcfg.save_cfg()  # 保存
    #gcfg.show_cfg()  # 展示

def run_jpg(c_file):
    # 将cfg转化为有向图
    c_copy_cfg = c_file.split('.')[0] + '.cfg'
    ctd = CfgToDot(c_copy_cfg)
    #print(ctd.get_edges())
    with open(c_file.split('.')[0] + '.txt','w') as f:
        print(ctd.get_edges()[0],file=f)
        print(ctd.get_edges()[1], file=f)
    f.close()
    output(c_file.split('.')[0] + '.txt')
    #print('nodes:',ctd.get_edges()[0])
    #print('edges:',ctd.get_edges()[1])
    c_copy_dot = c_file.split('.')[0]+'_dot'
    ctd.call_dot(c_copy_dot)  # 生成有向图
    return c_copy_dot+'.jpg'

def nor_node(path):
    f = open(path,'r',encoding = 'utf-8')
    nodes = f.readline().strip().lstrip('[').rstrip(']')
    f.close()
    return nodes

def nor_edge(path):
    f = open(path, 'r', encoding='utf-8')
    next(f)
    edges = (f.readline().strip().replace('[', '', 1))[:-1]
    f.close()
    return edges

def subString(template):
    rule = r'\'(.*?)\''
    slotList = re.findall(rule, template)
    return slotList

def output(path):
    G = nx.DiGraph()
    nodes = subString(nor_node(path))
    for node in nodes:
        G.add_node(node)

    edges = subString(nor_edge(path))
    num = 0
    for edge in edges[0:len(edges):2]:
        G.add_edge(edge,edges[num+1])
        num += 2
    nx.write_gml(G,path.split('.')[0] + '.gml')

def weighted_average(g, model):
    vec = np.zeros(64)
    for word in g.nodes():
        vec += model[word]
    vec /= len(g.nodes())
    return vec

def vector_similarity(v1,v2):
    return np.dot(v1, v2) / (norm(v1) * norm(v2)) # 计算余弦相似度



if __name__ == '__main__':
    path_1 = 'C:/Users/lenovo/Desktop/Greatestcommondivisor-1.cpp'  # 文件路径
    path_2 = 'C:/Users/lenovo/Desktop/Euclid-1.cpp'

    run_cfg(path_1)
    run_cfg(path_2)
