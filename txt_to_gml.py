import re
import os
import networkx as nx
import matplotlib.pyplot as plt

def nor_node(path):
    f = open(path,'r',encoding = 'utf-8')
    nodes = f.readline().split(':')[1].strip().lstrip('[').rstrip(']')
    f.close()
    return nodes

def nor_edge(path):
    f = open(path, 'r', encoding='utf-8')
    next(f)
    edges = (f.readline().split(':')[1].strip().replace('[', '', 1))[:-1]
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
    return G


def in_name():
    path = 'E:\graph_embedding\CFG_GRAPH_RESP'
    file_list = os.listdir(path)
    for floder_name in file_list:
        floder_path = os.path.join(path, floder_name)
        floder_list = os.listdir(floder_path)
        for file in floder_list:
            file_path = os.path.join(floder_path, file)
            graph = output(file_path)
            filename = file_path.split('.')[0]+'.gml'
            nx.write_gml(graph,filename)

#path = 'E:\graph_embedding\数据处理相关文件\CFG_GRAPH_RESP\_1_GreatestCommonDivisor\Greatestcommondivisor-1.txt'
#nx.draw(output(path), with_labels=True, edge_color='b', node_color='cyan', node_size=1000)#绘制程序控制流程图
#plt.show()#展示
#plt.savefig('./generated_image.png') 保存生成的图为图片文件


#将控制流程图txt文件转换成gml文件
if __name__ == '__main__':
    pathname = 'E:\graph_embedding\CFG_GRAPH_RESP'
    graph = output(pathname)
    nx.write_gml(graph,'./tt.gml')
    #graph = nx.read_gml('tt.gml')
    #in_name()


