// DueueTest05.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*deque Ԫ�صķ������*/
{
	deque<int> dInt;
	dInt.push_back(1);
	dInt.push_back(3);
	dInt.push_back(5);
	dInt.push_back(7);
	dInt.push_back(9);
	dInt.push_back(11);
	// dequeԪ�ص�ǰ�����
	deque<int>::iterator i,iend;
	iend = dInt.end();
	for (i=dInt.begin(); i!=iend; ++i)
		cout << *i << ' ';

	cout << endl;

	// dequeԪ�صķ������
	deque<int>::reverse_iterator ri, riend;
	riend = dInt.rend();
	for (ri=dInt.rbegin(); ri!=riend; ++ri)
		cout << *ri << ' ';
	cout << endl;

	return 0;
}

