// QueueTest01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])	/*获取 queue 队列的所有元素*/
{
	// 创建 queue 对象
	queue<int> q;
	// 元素入队
	q.push(3);
	q.push(19);
	q.push(29);
	q.push(26);
	q.push(33);
	// 元素出对
	while (!q.empty())	/*队列非空的判断*/
	{
		// 打印队首元素(取队首)
		cout << q.front() << '    ';
		// 删除队首元素
		q.pop();
	}

	cout << endl;

	return 0;
}

