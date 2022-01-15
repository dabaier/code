
from f1_score_w2v import Matrixregion as M1
from f1_score_w2v import MatrixF1 as M2
from f1_score_deepwalk import Matrixregion as M3
from f1_score_deepwalk import MatrixF1 as M4
from f1_score_d2v import Matrixregion as M5
from f1_score_d2v import MatrixF1 as M6
import matplotlib.pyplot as plt
from f1_score_w2v import MatrixPrecision as P1
from f1_score_d2v import MatrixPrecision as P2
from f1_score_deepwalk import MatrixPrecision as P3
from f1_score_w2v import MatrixRecall as R1
from f1_score_d2v import MatrixRecall as R2
from f1_score_deepwalk import MatrixRecall as R3


plt.figure(figsize=(12, 5))
plt.subplots_adjust(left=None,bottom=None,right=None,top=None,wspace=0.2,hspace=0.2)
plt.subplot(1, 3, 1)
plt.plot(M1,M2, 'b', label='word2vec',linestyle=':')
plt.plot(M5,M6, 'g', label='doc2vec',linestyle='--')
plt.plot(M3,M4, 'r', label='deepwalk')
plt.xlabel('threshold')
plt.ylabel('F1/(%)')
plt.title('f1_score')

plt.subplot(1, 3, 2)
plt.plot(M1, P1, 'b', label='word2vec',linestyle=':')
plt.plot(M5,P2, 'g', label='doc2vec',linestyle='--')
plt.plot(M3,P3, 'r', label='deepwalk')
plt.xlabel('threshold')
plt.ylabel('Precision/(%)')
plt.title('Precision')

plt.subplot(1, 3, 3)
plt.plot(M1, R1, 'b', label='word2vec',linestyle=':')
plt.plot(M5,R2, 'g', label='doc2vec',linestyle='--')
plt.plot(M3,R3, 'r', label='deepwalk')
plt.xlabel('threshold')
plt.ylabel('Recall/(%)')
plt.title('Recall')

plt.legend()
plt.show()