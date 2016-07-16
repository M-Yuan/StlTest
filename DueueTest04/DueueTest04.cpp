// DueueTest04.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

/**************************************************************************************************** 
���ͣ�
	deque �����ṩ��ɾ����Ԫ�ص� pop_front ������ɾ��βԪ�ص� pop_back ������ɾ������λ�û������������Ԫ�ص� 
erase �������Լ�ɾ������Ԫ�ص� clear ������
1.    void pop_front();     ɾ�� deque �ĵ�һ��Ԫ��
2.    void pop_back();    ɾ�� deque �����һ��Ԫ��
3.    iterator erase(iterator pos);     ɾ�� pos ��ָ���Ԫ��
4.    iterator erase(iterator first, iterator last);    ɾ�� ���������� [first, last) ��ָ�������Ԫ�ء�
5.    void clear();    ɾ������Ԫ��
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*ͷβ������λ��ɾ�� deque Ԫ��*/
{
	deque<int> dInt;
	dInt.push_back(4);
	dInt.push_back(5);
	dInt.push_back(3);
	dInt.push_back(7);
	dInt.push_back(9);
	dInt.push_back(6);
	// ��������Ԫ��
	cout<<"��������Ԫ��:"<<endl;
	for (int i=0; i<dInt.size(); i++)
		cout << dInt[i] << " " ;
	cout << endl << endl;

	// ͷβ������ɾ��Ԫ��
	cout<<"ɾ���� 2 ��Ԫ�� dInt[1]:"<<endl;
	dInt.erase(dInt.begin() + 1);  // ɾ���� 2 ��Ԫ�� dInt[1]
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	cout<<"ɾ����Ԫ��:"<<endl;
	dInt.pop_front();    // ɾ����Ԫ��
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	cout<<"ɾ��ĩβԪ��:"<<endl;
	dInt.pop_back();    // ɾ��ĩβԪ��
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << " " ;
	cout << endl << endl;

	// ɾ������Ԫ��
	cout << "ɾ������Ԫ��, ִ�� clear() " << endl;
	dInt.clear();
	cout << "deque Ԫ��ȫ�����" << endl;
	return 0;
}

