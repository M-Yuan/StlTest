// DueueTest06.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

void print(deque<int>& d);

int _tmain(int argc, _TCHAR* argv[])	/*两个 deque 容器的元素交换*/
{
	// d1
	deque<int> d1;
	d1.push_back(11);
	d1.push_back(12);
	d1.push_back(13);
	cout << "d1 = ";
	print(d1);

	// d2
	deque<int> d2;
	d2.push_back(90);
	d2.push_back(91);
	d2.push_back(92);
	cout << "d2 = ";
	print(d2);

	// d1 和 d2 交换
	d1.swap(d2);
	cout << "d1 和 d2 交换后" << endl;
	cout << "d1 = ";
	print(d1);
	cout << "d2 = ";
	print(d2);

	return 0;
}

// deque 元素打印
void print(deque<int>& d)
{

	for (int i=0; i<d.size(); i++)
		cout << d[i] << ' ';
	cout << endl;
}

