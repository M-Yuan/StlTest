// DueueTest02.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#pragma warning(disable:4786)  // ����������У����Գ��ַ��ĽضϾ���
#include <deque>
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*�õ��������� deque Ԫ��*/
{
	deque<string> dStr;
	dStr.push_back("����");
	dStr.push_back("2008");
	dStr.push_back("����");

	// ������ i �� iend
	deque<string>::iterator i, iend;
	iend = dStr.end();
	int j;
	// ��ӡ ������2008���ˡ�
	for (i=dStr.begin(), j=0; i!=iend; ++i, ++j)
		cout << *i;
	cout << endl;
	return 0;
}

