// DueueTest05.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*deque 元素的反向遍历*/
{
	deque<int> dInt;
	dInt.push_back(1);
	dInt.push_back(3);
	dInt.push_back(5);
	dInt.push_back(7);
	dInt.push_back(9);
	dInt.push_back(11);
	// deque元素的前向遍历
	deque<int>::iterator i,iend;
	iend = dInt.end();
	for (i=dInt.begin(); i!=iend; ++i)
		cout << *i << ' ';

	cout << endl;

	// deque元素的反向遍历
	deque<int>::reverse_iterator ri, riend;
	riend = dInt.rend();
	for (ri=dInt.rbegin(); ri!=riend; ++ri)
		cout << *ri << ' ';
	cout << endl;

	return 0;
}

