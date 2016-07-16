// DueueTest04.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

/**************************************************************************************************** 
解释：
	deque 容器提供了删除首元素的 pop_front 函数，删除尾元素的 pop_back 函数，删除任意位置或迭代器区间上元素的 
erase 函数，以及删除所有元素的 clear 函数。
1.    void pop_front();     删除 deque 的第一个元素
2.    void pop_back();    删除 deque 的最后一个元素
3.    iterator erase(iterator pos);     删除 pos 所指向的元素
4.    iterator erase(iterator first, iterator last);    删除 迭代器区间 [first, last) 所指向的所有元素。
5.    void clear();    删除所有元素
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*头尾和其他位置删除 deque 元素*/
{
	deque<int> dInt;
	dInt.push_back(4);
	dInt.push_back(5);
	dInt.push_back(3);
	dInt.push_back(7);
	dInt.push_back(9);
	dInt.push_back(6);
	// 遍历所有元素
	cout<<"遍历所有元素:"<<endl;
	for (int i=0; i<dInt.size(); i++)
		cout << dInt[i] << " " ;
	cout << endl << endl;

	// 头尾和任意删除元素
	cout<<"删除第 2 个元素 dInt[1]:"<<endl;
	dInt.erase(dInt.begin() + 1);  // 删除第 2 个元素 dInt[1]
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	cout<<"删除首元素:"<<endl;
	dInt.pop_front();    // 删除首元素
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	cout<<"删除末尾元素:"<<endl;
	dInt.pop_back();    // 删除末尾元素
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	// 删除所有元素
	cout << "删除所有元素, 执行 clear() " << endl;
	dInt.clear();
	cout << "deque 元素全部清除" << endl;
	return 0;
}

