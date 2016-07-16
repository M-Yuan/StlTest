// DueueTest06.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

void print(deque<int>& d);

int _tmain(int argc, _TCHAR* argv[])	/*���� deque ������Ԫ�ؽ���*/
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

	// d1 �� d2 ����
	d1.swap(d2);
	cout << "d1 �� d2 ������" << endl;
	cout << "d1 = ";
	print(d1);
	cout << "d2 = ";
	print(d2);

	return 0;
}

// deque Ԫ�ش�ӡ
void print(deque<int>& d)
{

	for (int i=0; i<d.size(); i++)
		cout << d[i] << ' ';
	cout << endl;
}

