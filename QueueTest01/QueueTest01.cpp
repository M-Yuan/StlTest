// QueueTest01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*��ȡ queue ���е�����Ԫ��*/
{
	// ���� queue ����
	queue<int> q;
	// Ԫ�����
	q.push(3);
	q.push(19);
	q.push(29);
	q.push(26);
	q.push(33);
	// Ԫ�س���
	while (!q.empty())	/*���зǿյ��ж�*/
	{
		// ��ӡ����Ԫ��(ȡ����)
		cout << q.front() << '    ';
		// ɾ������Ԫ��
		q.pop();
	}

	cout << endl;

	return 0;
}

