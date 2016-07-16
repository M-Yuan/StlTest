// MultiMapTest01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
一般要用 begin 和 end 函数找出遍历开始的首元素和结束元素，然后通过迭代器的 “++” 和 “*“ 操作取出元素。
	下面的示例程序，将水果价格元素表的记录打印出来。由于水果价格作为元素的键值，并采用默认的 less<float> 作比较
函数对象，将按价格由小到大打印出来。
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*遍历 multimap 容器元素*/
{
	multimap<float, char*> mm;
	mm.insert(pair<float, char*>(3.0f, "apple"));
	mm.insert(pair<float, char*>(3.0f, "pear"));
	mm.insert(pair<float, char*>(2.6f, "orange"));
	mm.insert(pair<float, char*>(1.8f, "banana"));
	mm.insert(pair<float, char*>(6.3f, "lichee"));
	// 遍历打印
	multimap<float, char*>::iterator  it, iend;
	iend = mm.end();
	for (it=mm.begin(); it!=iend; ++it)
		cout << (*it).second << "		" << (*it).first << "元/斤 \n";
	return 0;
}

