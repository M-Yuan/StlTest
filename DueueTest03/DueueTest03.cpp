// DueueTest03.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

/**************************************************************************************************** 
���ͣ�
    ���� deque ʹ���������������ֱ�ָ��˫�˶��е���β����ˣ�deque ���и�Ч�ġ�ͷ��������Ԫ�صĺ��� push_front()
����λ�õĲ��룬���漰���Ԫ�ص���λ������
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*ͷ�����м�λ�ò��� deque Ԫ��*/
{
	deque<int> dInt;
	dInt.push_back(6);
	dInt.push_back(7);

	// ͷ������
	dInt.push_front(5);
	for (int i=0; i<dInt.size(); i++)
		cout << dInt[i] << ' ';
	cout << endl;

	// �м�λ�ò���
	// �ڵ�2��Ԫ��֮ǰ����9�� �� 5 9 6 7 
	dInt.insert(dInt.begin() + 1, 9);
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << ' ';
	cout << endl;
	return 0;
}

