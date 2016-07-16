// DueueTest03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
using namespace std;

/**************************************************************************************************** 
解释：
    由于 deque 使用了两个迭代器分别指向双端队列的首尾，因此，deque 具有高效的【头部】插入元素的函数 push_front()
其他位置的插入，将涉及相关元素的移位拷贝。
****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*头部和中间位置插入 deque 元素*/
{
	deque<int> dInt;
	dInt.push_back(6);
	dInt.push_back(7);

	// 头部插入
	dInt.push_front(5);
	for (int i=0; i<dInt.size(); i++)
		cout << dInt[i] << ' ';
	cout << endl;

	// 中间位置插入
	// 在第2个元素之前插入9， 即 5 9 6 7 
	dInt.insert(dInt.begin() + 1, 9);
	for (int j=0; j<dInt.size(); j++)
		cout << dInt[j] << ' ';
	cout << endl;
	return 0;
}

