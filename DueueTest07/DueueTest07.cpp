// DueueTest07.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4786)
#include <deque>
#include <iostream>
#include <string>
using namespace std;

/****************************************************************************************************
解释：
	deque 其他函数的说明，参加 Random access container 、 Back insertion sequence 和 Front insertion 
sequence 概念的函数定义要求，下面给出 deque 的其他几个常用函数的用法。
	bool  empty()    判断 deque 容器是否已有元素，是则返回 true，否则返回 false
	size_type  size()    当前 deque 容器的元素个数
	size_type  max_size()    系统所支持的 deque 容器的最大元素个数
	reference  front()    deque容器的首元素（引用返回），要求 deque 不为空
	reference  back()    deque容器的末元素（引用返回），要求 deque 不为空
*****************************************************************************************************/

int _tmain(int argc, _TCHAR* argv[])	/*deque 其他常用函数的使用*/
{
	deque<string> dStr;
	// 打印 deque 为空
	cout << "dStr是否为空: " << dStr.empty() << endl;
	// 装入deque 元素
	dStr.push_back("红楼梦");
	dStr.push_back("三国演义");
	dStr.push_back("西游记");
	dStr.push_back("水浒传");
	dStr.push_back("史记");
	dStr.push_back("莫言");
	dStr.push_back("金庸");
	dStr.push_back("何亮到此一游");
	// 打印 deque 所有元素
	deque<string>::iterator i, iend;
	iend = dStr.end();
	for (i=dStr.begin(); i!=iend; ++i)
		cout << *i << "    ";
	cout << endl;
	// 打印首元素
	cout << "deque 首元素为: " << dStr.front() << endl;
	// 打印末元素
	cout << "deque 末元素为: " << dStr.back() << endl;
	// 打印元素个数
	cout << "deque 元素个数为: " << dStr.size() << endl;
	// 打印可支持的最大 deque 元素个数
	cout << "deque 最大元素个数为: " << dStr.max_size() << endl;
	return 0;
}

/**************************************deque  小结******************************************************
	deque 双端队列容器采用分块的线型结构来存储数据，两个迭代器分别指向容器的首尾元素，具有高效的首尾元素的 
push_front() 和 pop_front() 函数。
	由于 deque 容器是以 deque 块为单位进行内存分配，并使用了二级的 Map 进行管理，因此，不易于实现类似于 vector 的 
capacity 和 reverse 函数，而且，deque 容器也不需要这样的获取和调整容器大小的函数。

  deque 缺点：频繁的插入删除的时候， deque 不合适。
  deque 优点：看前面的介绍。
*******************************************************************************************************/