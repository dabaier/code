import matplotlib.pyplot as plt

filename = "_result3.txt"
MatrixPrecision = []
MatrixRecall = []
MatrixF1 = []
Matrixregion = []

region = 0.3
Max = [0, 0, 0, 0, 0, 0, 0, 0]
while region <= 1:
    # print("Begin region:"+str(region))
    TP = 0
    TN = 0
    FP = 0
    FN = 0
    with open(filename) as file:
        while 1:
            x = file.readline()
            if not x:
                break
            doc = x.split("  ")
            l = float(doc[2]) # 余弦相似度
            r = float(doc[3]) # 0或1
            if l >= region and r == 1: # 实际为正，预测为正的样本数量
                TP += 1
            if l < region and r == 0: # 实际为负，预测为负的样本数量
                TN += 1
            if l >= region and r == 0: # 实际为正，预测为负的样本数量
                FN += 1
            if l < region and r == 1: # 实际为负，预测为正的样本数量
                FP += 1
    file.close()

    print(TN, TP, FN, FP, region)
    Precision = TP / (TP + FP)
    Recall = TP / (TP + FN)
    Score = 2 * Precision * Recall / (Precision + Recall)

    if Score > Max[7]:
        Max[0] = region
        Max[1] = TP
        Max[2] = TN
        Max[3] = FP
        Max[4] = FN
        Max[5] = Precision
        Max[6] = Recall
        Max[7] = Score
    # print("region:"+str(region),"\nTP:"+str(TP),"\nTN:"+str(TN),"\nFN:"+str(FN),"\nFP:"+str(FP))
    # print("Precision:"+str(Precision),"\nRecall:"+str(Recall),"\nScore："+str(Score))
    # print()
    # print("Finish region:"+str(region))
    # 增加plot
    MatrixPrecision.append(Precision)
    MatrixRecall.append(Recall)
    MatrixF1.append(Score)
    Matrixregion.append(region)

    region += 0.05

plt.figure(figsize=(10, 5))
"""
用于创建图片，figure(num=None, figsize=None, dpi=None, facecolor=None, edgecolor=None, frameon=True)
num:图像编号或名称，数字为编号 ，字符串为名称
figsize:指定figure的宽和高，单位为英寸；
dpi参数指定绘图对象的分辨率，即每英寸多少个像素
facecolor:背景颜色
edgecolor:边框颜色
frameon:是否显示边框
"""
plt.subplot(1, 2, 1)
plt.plot(Matrixregion, MatrixPrecision, 'b', label='Precision')#根据点连接线。根据x(数组或者列表) 和 y(数组或者列表)组成点，然后连接成线。类似plt.imshow()的作用。
plt.plot(Matrixregion, MatrixRecall, 'r', label='Recall')
plt.title('Precision and Recall Accuracy')
plt.legend()

plt.subplot(1, 2, 2)
plt.plot(Matrixregion, MatrixF1, 'b', label='F1_score')
plt.title('f1_score')
plt.legend()
plt.show()

print()
print("Max:" + filename)
print("region:" + str(Max[0]))
print("TP:" + str(Max[1]), "\nTN:" + str(Max[2]), "\nFP:" + str(Max[3]), "\nFN:" + str(Max[4]))
print("Precision:" + str(Max[5]))
print("Recall:" + str(Max[6]))
print("Score：" + str(Max[7]))

# 所有性能指标 保存 ，同时输出曲线变化

