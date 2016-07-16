// MultiMapTest01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
һ��Ҫ�� begin �� end �����ҳ�������ʼ����Ԫ�غͽ���Ԫ�أ�Ȼ��ͨ���������� ��++�� �� ��*�� ����ȡ��Ԫ�ء�
	�����ʾ�����򣬽�ˮ���۸�Ԫ�ر�ļ�¼��ӡ����������ˮ���۸���ΪԪ�صļ�ֵ��������Ĭ�ϵ� less<float> ���Ƚ�
�������󣬽����۸���С�����ӡ������
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*���� multimap ����Ԫ��*/
{
	multimap<float, char*> mm;
	mm.insert(pair<float, char*>(3.0f, "apple"));
	mm.insert(pair<float, char*>(3.0f, "pear"));
	mm.insert(pair<float, char*>(2.6f, "orange"));
	mm.insert(pair<float, char*>(1.8f, "banana"));
	mm.insert(pair<float, char*>(6.3f, "lichee"));
	// ������ӡ
	multimap<float, char*>::iterator  it, iend;
	iend = mm.end();
	for (it=mm.begin(); it!=iend; ++it)
		cout << (*it).second << "		" << (*it).first << "Ԫ/�� \n";
	return 0;
}

