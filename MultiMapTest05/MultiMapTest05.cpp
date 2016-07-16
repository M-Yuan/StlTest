// MultiMapTest05.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
	下面的示例程序调用 multimap 容器的 size 和 count 函数，对元素个数和去某键值的元素个数进行统计
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*multimap 容器元素的设计*/
{
	multimap<int, char> mm;
	// 打印元素个数：0
	cout << mm.size() << endl;  
	mm.insert(pair<int, char>(3, 'a'));
	mm.insert(pair<int, char>(3, 'c'));
	mm.insert(pair<int, char>(4, 'd'));
	mm.insert(pair<int, char>(5, 'e'));
	// 打印键值为 3 的元素个数
	cout << mm.count(3) << endl;
	// 打印元素个数
	cout << mm.size() << endl;
	return 0;
}


/**************************************multimap 小结*****************************************************
 *
 *	multimap 多重映照容器也是一种依元素键值进行插入、删除和检索的有序关联容器，元素的检索具有对数阶的算法时间复杂
 *度。与 map 容器的区别是，multimap 允许元素键值出现重复，这导致 multimap 多重映照容器不能像 map 容器那样，可简便
 *地利用数组方式访问或添加容器元素。
 *
 *	multimap 缺点：和 map 的缺点差不多。multimap 是比较复杂的用法，如果能用 vector 、list 这些容器完成的事情，
 *就不需要用到 multimap .
 *	multimap 优点：相比 map ，multimap 能允许重复键值的元素插入。
 *
*******************************************************************************************************/