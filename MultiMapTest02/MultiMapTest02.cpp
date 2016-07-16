// MultiMapTest02.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
	���� multimap ��������ķ�������� reverse_iterator �� const_reverse_iterator ������ȡ������βԪ�ص� 
rbegin �� rend �������ɷ������ multimap ������Ԫ�ء�
    ��������ʹ�÷����������ˮ���۸��ļ�¼���۸��С���ɴ�С��ӡ������
    ע�⣺��ֵ��ͬ�� pear ������ apple ��ӡ�������ɼ����ڵȼ�ֵ�ķ�����������£�������Ԫ���ȴ�ӡ������
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*������� multimap ������Ԫ��*/
{
	multimap<float, char*> mm;
	mm.insert(pair<float, char*>(3.0f, "apple"));
	mm.insert(pair<float, char*>(3.0f, "pear"));
	mm.insert(pair<float, char*>(2.6f, "orange"));
	mm.insert(pair<float, char*>(1.8f, "banana"));
	mm.insert(pair<float, char*>(6.3f, "lichee"));
	// ���������ӡ
	multimap<float, char*>::reverse_iterator  r_i, r_iend;
	r_iend = mm.rend();
	for (r_i=mm.rbegin(); r_i!=r_iend; ++r_i)
		cout << (*r_i).second << "		" << (*r_i).first << "Ԫ/�� \n";
	return 0;
}

