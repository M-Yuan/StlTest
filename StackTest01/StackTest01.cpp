// StatckTest01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*��ȡ��ջ��ջ��Ԫ��*/
{
	// ������ջ����
	stack<int> sk;

	// Ԫ����ջ
	sk.push(3);
	sk.push(19);
	sk.push(20);
	sk.push(36);
	sk.push(45);
	sk.push(9);

	// Ԫ�����γ�ջ
	while(!sk.empty())
	{
		// ��ӡջ��Ԫ�أ�����ȳ�(LIFO)
		cout<<sk.top()<<endl;
		// Ԫ�س�ջ
		sk.pop();
	}


	return 0;
}

