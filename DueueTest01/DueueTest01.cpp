// DueueTest01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*用数组方式访问 deque 元素*/
{
	deque<int> dInt;
	dInt.push_back(1);
	dInt.push_back(3);
	dInt.push_back(5);
	dInt.push_back(7);

	for (int i=0; i<dInt.size(); i++)
	{
		// 打印 d[0], d[1], d[2], d[3]。访问越界时，不产生异常
		cout << "d[" << i << "]=" << dInt[i] << endl;

		// 输出 dInt 中各个元素。当访问越界时，会抛出异常
		//        cout << dInt.at(i) << endl;
	}
	return 0;
}

