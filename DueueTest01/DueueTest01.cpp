// DueueTest01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*�����鷽ʽ���� deque Ԫ��*/
{
	deque<int> dInt;
	dInt.push_back(1);
	dInt.push_back(3);
	dInt.push_back(5);
	dInt.push_back(7);

	for (int i=0; i<dInt.size(); i++)
	{
		// ��ӡ d[0], d[1], d[2], d[3]������Խ��ʱ���������쳣
		cout << "d[" << i << "]=" << dInt[i] << endl;

		// ��� dInt �и���Ԫ�ء�������Խ��ʱ�����׳��쳣
		//        cout << dInt.at(i) << endl;
	}
	return 0;
}

