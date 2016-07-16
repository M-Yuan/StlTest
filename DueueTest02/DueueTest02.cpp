// DueueTest02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4786)  // 必须放在首行，忽略长字符的截断警告
#include <deque>
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*用迭代器访问 deque 元素*/
{
	deque<string> dStr;
	dStr.push_back("北京");
	dStr.push_back("2008");
	dStr.push_back("奥运");

	// 迭代器 i 和 iend
	deque<string>::iterator i, iend;
	iend = dStr.end();
	int j;
	// 打印 “北京2008奥运”
	for (i=dStr.begin(), j=0; i!=iend; ++i, ++j)
		cout << *i;
	cout << endl;
	return 0;
}

