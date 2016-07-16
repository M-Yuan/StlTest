// MultiMapTest04.cpp : 定义控制台应用程序的入口点。
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


int _tmain(int argc, _TCHAR* argv[])	/*multimap 容器的元素的搜索2*/
{
	// 定义一个迭代器
	CIT it;
	// 定义4个设备
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

	// 查找方法一（查找key值是"zhangsanfeng"）
	Range range = m_user.equal_range("zhangsanfeng");
	cout<<"key值：zhangsanfeng"<<endl;
	for (CIT it1 = range.first; it1!=range.second; ++it1)
	{
		cout<< (*it1).first <<",	"
			<< it1->second.m_deviced <<",	"
			<< it1->second.m_devicename.c_str()<<",	"
			<< it1->second.m_devicePopedom
			<< endl;
	}
	cout<< endl;



	// 查找方法二（查找"zhangsanfeng2"）
	CIT it2 = m_user.find("zhangsanfeng2");
	cout<<"key值：zhangsanfeng2"<<endl;
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


	// 遍历
	CIT it3 = m_user.begin();
	cout<<"遍历："<<endl;
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

