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
int main(int argc, const char * argv[])
{
    list<int> list1; // 创建一个空的list
    list<int> list2(list1); // 复制另一个同类型元素的list
    list<int> list3(10); // 创建n个元素的list，每个元素值由默认构造函数确定
    list<int> list4(10,0); // 创建n个元素的list，每个元素的值为elem




    return 0;
}


