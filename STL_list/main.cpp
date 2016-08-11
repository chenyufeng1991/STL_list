//
//  main.cpp
//  STL_list
//
//  Created by chenyufeng on 8/11/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

/**
 *  list是一个双向链表，不能进行随机访问
 *
 */

void PrintList(list<int> pList);

int main(int argc, const char * argv[])
{
    list<int> list1; // 创建一个空的list
    list<int> list2(list1); // 复制另一个同类型元素的list
    list<int> list3(10); // 创建n个元素的list，每个元素值由默认构造函数确定
    list<int> list4(10,0); // 创建n个元素的list，每个元素的值为elem

    // 尾部增加一个元素
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(8);

    // 头部增加一个元素
    list1.push_front(3);
    list1.push_front(5);
    list1.push_front(7);

    PrintList(list1);

    // 删除尾部元素
    list1.pop_back();
    PrintList(list1);

    // 删除头部元素
    list1.pop_front();
    PrintList(list1);

    // 删除容器中所有元素等于x的元素
    list1.remove(2);
    PrintList(list1);

    // 在指定位置插入元素x，需要使用迭代器找到该元素
    list<int>::iterator listInte = list1.begin();
    for (int i = 0; i < 2 && listInte != list1.end(); i++)
    {
        listInte++;
    }
    list1.insert(listInte, 99);
    PrintList(list1);

    // 删除指定位置的元素
    list<int>::iterator listErase = list1.begin();
    for (int i = 0; i < 2 && listErase != list1.end(); i++)
    {
        listErase++;
    }
    list1.erase(listErase);
    PrintList(list1);

    cout << "尾部元素为：" << list1.back() << endl;
    cout << "头部元素为：" << list1.front() << endl;

    // 升序排序
    list1.sort();
    PrintList(list1);

    // 降序排序
    list1.reverse();
    PrintList(list1);

    // 交换两个list
    list<int> listSwap;
    listSwap.push_back(33);
    listSwap.push_back(44);

    list1.swap(listSwap);
    PrintList(list1);
    PrintList(listSwap);

    // 清空整个链表
    list1.clear();
    PrintList(list1);

    return 0;
}

void PrintList(list<int> pList)
{
    cout << "list打印结果为：";
    list<int>::iterator listIte;
    for (listIte = pList.begin(); listIte != pList.end(); listIte++)
    {
        cout << *listIte << " ";
    }

    cout << endl;
}









