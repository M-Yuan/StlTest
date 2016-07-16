// MultiMapTest04.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <UTILITY>
#include <map>
using namespace std;

struct userdevice
{
	string m_devicename;
	long m_deviced;
	int m_devicePopedom;
};

typedef multimap<string, userdevice> USERTABLE;        
typedef USERTABLE::const_iterator CIT;
typedef pair<CIT, CIT> Range;


int _tmain(int argc, _TCHAR* argv[])	/*multimap ������Ԫ�ص�����2*/
{
	// ����һ��������
	CIT it;
	// ����4���豸
	userdevice d1, d2, d3, d4;
	d1.m_deviced = 12341234;
	d1.m_devicename = "d1";
	d1.m_devicePopedom = 123;

	d2.m_deviced = 23622344;
	d2.m_devicename = "d2";
	d2.m_devicePopedom = 234;

	d3.m_deviced = 3451234;
	d3.m_devicename = "d3";
	d3.m_devicePopedom = 345;

	d4.m_deviced = 43622344;
	d4.m_devicename = "d4";
	d4.m_devicePopedom = 456;

	USERTABLE m_user;
	m_user.insert(pair<string, userdevice>("zhangsanfeng",d1));
	m_user.insert(pair<string, userdevice>("zhangsanfeng",d2));

	m_user.insert(pair<string, userdevice>("zhangsanfeng2",d3));
	m_user.insert(pair<string, userdevice>("zhangsanfeng2",d4));

	// ���ҷ���һ������keyֵ��"zhangsanfeng"��
	Range range = m_user.equal_range("zhangsanfeng");
	cout<<"keyֵ��zhangsanfeng"<<endl;
	for (CIT it1 = range.first; it1!=range.second; ++it1)
	{
		cout<< (*it1).first <<",	"
			<< it1->second.m_deviced <<",	"
			<< it1->second.m_devicename.c_str()<<",	"
			<< it1->second.m_devicePopedom
			<< endl;
	}
	cout<< endl;



	// ���ҷ�����������"zhangsanfeng2"��
	CIT it2 = m_user.find("zhangsanfeng2");
	cout<<"keyֵ��zhangsanfeng2"<<endl;
	while(it2!=m_user.end())
	{
		cout<< (*it2).first <<",	"
			<< it2->second.m_deviced <<",	"
			<< it2->second.m_devicename.c_str()<<",	"
			<< it2->second.m_devicePopedom
			<< endl;
		++it2;
	}
	cout<< endl;


	// ����
	CIT it3 = m_user.begin();
	cout<<"������"<<endl;
	while (it3!=m_user.end())
	{
		cout<< (*it3).first <<",	"
			<< it3->second.m_deviced <<",	"
			<< it3->second.m_devicename.c_str()<<",	"
			<< it3->second.m_devicePopedom
			<< endl;

		++it3;
	}
	cout<< endl;

	return 0;
}

