from gen_cfg import GenCfg, CfgToDot
import os

def run_cfg(c_file):
    # 生成cfg
    gcfg = GenCfg(c_file)
    gcfg.gen_cfg()  # 生成
    gcfg.save_cfg()  # 保存
    #gcfg.show_cfg()  # 展示

    c_copy_cfg = c_file.split('.')[0] + '.cfg'
    ctd = CfgToDot(c_copy_cfg)
    print(ctd.get_edges())
    print('nodes:',ctd.get_edges()[0])
    print('edges:',ctd.get_edges()[1])
    c_copy_dot = c_file.split('.')[0]+'_dot'
    ctd.call_dot(c_copy_dot)  # 生成有向图



if __name__ == '__main__':
    """
    # 训练集
    path_1 = 'E:/graph_embedding/数据处理相关文件/Dataset/train'
    travel_data(path_1)
    # 测试集
    path_2 = 'E:/graph_embedding/数据处理相关文件/Dataset/test'
    travel_data(path_2)
    # 验证集
    path_3 = 'E:/graph_embedding/数据处理相关文件/Dataset/val'
    travel_data(path_3)
    
    """

    path = 'E:/graph_embedding/Pro_Dataset/test'

    file_list = os.listdir(path)
    for floder_name in file_list:
        floder_path = os.path.join(path, floder_name)
        floder_list = os.listdir(floder_path)
        for file in floder_list:
            file_path = os.path.join(floder_path, file)
            run_cfg(file_path)



