import sys
from PyQt5.QtWidgets import QMainWindow, QApplication, QFileDialog
from PyQt5 import QtWidgets,QtCore,QtGui
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *

from 代码相似度量研究 import Ui_MainWindow
from run_file import run_cfg, vector_similarity, weighted_average
from run_file import run_jpg


import numpy as np
from ge import DeepWalk
import networkx as nx
from numpy.linalg import norm

class DetailUI(Ui_MainWindow,QMainWindow):
    def __init__(self):
        super(DetailUI, self).__init__()
        self.setupUi(self)
        self.setWindowTitle('代码相似度检测')
        self.pushButton.clicked.connect(self.click)
        self.pushButton_2.clicked.connect(self.click2)
        self.pushButton_3.clicked.connect(self.examine)
        self.pushButton_3.clicked.connect(self.openexamine)
        self.pushButton_4.clicked.connect(self.openimage)
        self.pushButton_5.clicked.connect(self.openimage1)
        self.pushButton_6.clicked.connect(self.CFGshow)
        self.pushButton_7.clicked.connect(self.CFGshow1)
        #界面美化
        self.label_pic1.setStyleSheet("QLabel{background:white;}")#有向图背景
        self.label_pic2.setStyleSheet("QLabel{background:white;}")
        self.pushButton.setStyleSheet(''' 
                             QPushButton
                             {text-align : center;
                             background-color : white;
                             font: bold;
                             border-color: gray;
                             border-width: 2px;
                             border-radius: 10px;
                             padding: 6px;
                             height : 14px;
                             border-style: outset;
                             font : 14px;}4
                             QPushButton:pressed
                             {text-align : center;
                             background-color : light gray;
                             font: bold;
                             border-color: gray;
                             border-width: 2px;
                             border-radius: 10px;
                             padding: 6px;
                             height : 14px;
                             border-style: outset;
                             font : 14px;}
                             ''')
        self.pushButton_2.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')
        self.pushButton_3.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')
        self.pushButton_4.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')
        self.pushButton_5.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')
        self.pushButton_6.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')
        self.pushButton_7.setStyleSheet(''' 
                                     QPushButton
                                     {text-align : center;
                                     background-color : white;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     QPushButton:pressed
                                     {text-align : center;
                                     background-color : light gray;
                                     font: bold;
                                     border-color: gray;
                                     border-width: 2px;
                                     border-radius: 10px;
                                     padding: 6px;
                                     height : 14px;
                                     border-style: outset;
                                     font : 14px;}
                                     ''')

    def click(self):
        # 选择cpp源文件1并以文本的形式输出到多行文本框textEdit
        global path
        self.filename = QFileDialog.getOpenFileName()
        path = self.filename[0]
        run_cfg(path)
        run_jpg(path)
        with open(path, 'r') as f:
            self.textEdit.setPlainText(f.read())

    def click2(self):
        # 选择cpp源文件2并以文本的形式输出到多行文本框textEdit_5
        global path1
        self.filename = QFileDialog.getOpenFileName()
        path1 = self.filename[0]
        run_cfg(path1)
        run_jpg(path1)
        with open(path1, 'r') as f:
            self.textEdit_5.setPlainText(f.read())
        return self.filename[0]

    def CFGshow(self):
        # 显示源文件1的GFC文件
        global path
        with open(path.split('.')[0]+'.cfg', 'r') as f:
            self.textEdit_2.setPlainText(f.read())

    def CFGshow1(self):
        # 显示源文件2的GFC文件
        global path1
        with open(path1.split('.')[0]+'.cfg', 'r') as f:
            self.textEdit_4.setPlainText(f.read())

    def openimage(self):
        #显示源文件1的有向图
        imgName, imgType = QFileDialog.getOpenFileName(self, "打开图片", "", "*.jpg;;*.png;;All Files(*)")
        jpg = QtGui.QPixmap(imgName).scaled(self.label_pic1.width(), self.label_pic1.height())
        self.label_pic1.setPixmap(jpg)

    def openimage1(self):
        # 显示源文件2的有向图
        imgName, imgType = QFileDialog.getOpenFileName(self, "打开图片", "", "*.jpg;;*.png;;All Files(*)")
        jpg = QtGui.QPixmap(imgName).scaled(self.label_pic1.width(), self.label_pic1.height())
        self.label_pic2.setPixmap(jpg)

    def examine(self)  :
        global path
        global path1
        # 输出相似度检测的结果
        G = nx.read_gml(path.split('.')[0]+'.gml')
        model = (DeepWalk(G, walk_length=10, num_walks=80, workers=1)).train(embed_size=64, window_size=5, iter=3)
        # model_ = model.train(embed_size=64,window_size=5, iter=3)
        v1 = weighted_average(G, model)

        G1 = nx.read_gml(path1.split('.')[0]+'.gml')
        model1 = (DeepWalk(G1, walk_length=10, num_walks=80, workers=1)).train(embed_size=64, window_size=5, iter=3)
        # model1_ = model1.train(embed_size=64,window_size=5, iter=3)
        v2 = weighted_average(G1, model1)

        # print(vector_similarity(v1, v2))
        result = np.float(vector_similarity(v1, v2))
        file_handle = open('E:/结果.txt', mode='w')
        file_handle.write('相似度：{:.2%}'.format(result))
        #将相似度结果保存在结果.txt文档并显示

    def openexamine(self):
        with open('E:/结果.txt', 'r') as f:
            self.textEdit_3.setPlainText(f.read())

    def runModel(self):
        pass

if __name__ == "__main__":
    app = QApplication(sys.argv)
    main = DetailUI()
    main.show()
    sys.exit(app.exec_())

