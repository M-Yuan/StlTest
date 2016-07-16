// StatckTest01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*读取堆栈的栈顶元素*/
{
	// 创建堆栈对象
	stack<int> sk;

	// 元素入栈
	sk.push(3);
	sk.push(19);
	sk.push(20);
	sk.push(36);
	sk.push(45);
	sk.push(9);

	// 元素依次出栈
	while(!sk.empty())
	{
		// 打印栈顶元素，后进先出(LIFO)
		cout<<sk.top()<<endl;
		// 元素出栈
		sk.pop();
	}


	return 0;
}

