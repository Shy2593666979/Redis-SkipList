//所有函数的解释与用法都在skiplist.h中，main主函数主要用于测试各种函数是否可行

#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"
int main()
{
    SkipList<int ,std::string>skipList(6);
    skipList.insert_element(1,"学习");
    skipList.insert_element(3,"跳表");
    skipList.insert_element(7,"去找");
    skipList.insert_element(8,"GitHub:");
    skipList.insert_element(9,"shy2593666979");
    skipList.insert_element(19,"赶紧给个");
    skipList.insert_element(19,"star!");
    std::cout<<"skipList.size = "<<skipList.size()<<std::endl;
    skipList.dump_file();
    skipList.search_element(8);
    skipList.search_element(9);
    skipList.display_list();
    skipList.delete_element(3);
    skipList.load_file();
    std::cout<<"skipList.size = "<<skipList.size()<<std::endl;
    skipList.display_list();
}