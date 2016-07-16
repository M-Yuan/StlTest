// MultiMapTest02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
	利用 multimap 容器定义的反向迭代器 reverse_iterator 和 const_reverse_iterator ，及获取反向首尾元素的 
rbegin 和 rend 函数，可反向遍历 multimap 容器的元素。
    例如下面使用反向遍历，将水果价格表的记录按价格大小，由大到小打印出来。
    注意：键值相同的 pear 将先于 apple 打印出来。可见，在等键值的反向遍历情形下，后插入的元素先打印出来。
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*反向遍历 multimap 容器的元素*/
{
	multimap<float, char*> mm;
	mm.insert(pair<float, char*>(3.0f, "apple"));
	mm.insert(pair<float, char*>(3.0f, "pear"));
	mm.insert(pair<float, char*>(2.6f, "orange"));
	mm.insert(pair<float, char*>(1.8f, "banana"));
	mm.insert(pair<float, char*>(6.3f, "lichee"));
	// 反向遍历打印
	multimap<float, char*>::reverse_iterator  r_i, r_iend;
	r_iend = mm.rend();
	for (r_i=mm.rbegin(); r_i!=r_iend; ++r_i)
		cout << (*r_i).second << "		" << (*r_i).first << "元/斤 \n";
	return 0;
}

