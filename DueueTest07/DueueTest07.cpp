// DueueTest07.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#pragma warning(disable:4786)
#include <deque>
#include <iostream>
#include <string>
using namespace std;

/****************************************************************************************************
���ͣ�
	deque ����������˵�����μ� Random access container �� Back insertion sequence �� Front insertion 
sequence ����ĺ�������Ҫ��������� deque �������������ú������÷���
	bool  empty()    �ж� deque �����Ƿ�����Ԫ�أ����򷵻� true�����򷵻� false
	size_type  size()    ��ǰ deque ������Ԫ�ظ���
	size_type  max_size()    ϵͳ��֧�ֵ� deque ���������Ԫ�ظ���
	reference  front()    deque��������Ԫ�أ����÷��أ���Ҫ�� deque ��Ϊ��
	reference  back()    deque������ĩԪ�أ����÷��أ���Ҫ�� deque ��Ϊ��
*****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*deque �������ú�����ʹ��*/
{
	deque<string> dStr;
	// ��ӡ deque Ϊ��
	cout << "dStr�Ƿ�Ϊ��: " << dStr.empty() << endl;
	// װ��deque Ԫ��
	dStr.push_back("��¥��");
	dStr.push_back("��������");
	dStr.push_back("���μ�");
	dStr.push_back("ˮ䰴�");
	dStr.push_back("ʷ��");
	dStr.push_back("Ī��");
	dStr.push_back("��ӹ");
	dStr.push_back("��������һ��");
	// ��ӡ deque ����Ԫ��
	deque<string>::iterator i, iend;
	iend = dStr.end();
	for (i=dStr.begin(); i!=iend; ++i)
		cout << *i << "    ";
	cout << endl;
	// ��ӡ��Ԫ��
	cout << "deque ��Ԫ��Ϊ: " << dStr.front() << endl;
	// ��ӡĩԪ��
	cout << "deque ĩԪ��Ϊ: " << dStr.back() << endl;
	// ��ӡԪ�ظ���
	cout << "deque Ԫ�ظ���Ϊ: " << dStr.size() << endl;
	// ��ӡ��֧�ֵ���� deque Ԫ�ظ���
	cout << "deque ���Ԫ�ظ���Ϊ: " << dStr.max_size() << endl;
	return 0;
}

/**************************************deque  С��******************************************************
	deque ˫�˶����������÷ֿ�����ͽṹ���洢���ݣ������������ֱ�ָ����������βԪ�أ����и�Ч����βԪ�ص� 
push_front() �� pop_front() ������
	���� deque �������� deque ��Ϊ��λ�����ڴ���䣬��ʹ���˶����� Map ���й�����ˣ�������ʵ�������� vector �� 
capacity �� reverse ���������ң�deque ����Ҳ����Ҫ�����Ļ�ȡ�͵���������С�ĺ�����

  deque ȱ�㣺Ƶ���Ĳ���ɾ����ʱ�� deque �����ʡ�
  deque �ŵ㣺��ǰ��Ľ��ܡ�
*******************************************************************************************************/