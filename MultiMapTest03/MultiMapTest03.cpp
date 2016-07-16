// MultiMapTest03.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
	由于键值允许重复插入，在 multimap 容器中具有同一个键值的元素有可能不只一个。因此，multimap 容器的 find 函数
将返回第一个搜索到的元素位置，如果元素不存在，则返回 end 结束元素位置。equal_range 函数则返回一个可指示相等元素范
围区间的 pair 对象。
****************************************************************************************************/

// 课程记录结构体
struct CourseRecord
{
	// 课程信息结构体
	struct CourseInfo
	{
		char* course;  // 课程名
		int  period;   // 学时
		char* required; // 必修或选修
	};

	char* teacher;  // 任课教师
	CourseInfo  cf;
	CourseRecord(char* teacher_, char* course_, int period_, char* required_)
	{
		teacher = teacher_;
		cf.course = course_;
		cf.period = period_;
		cf.required = required_;
	}
};

int _tmain(int argc, _TCHAR* argv[])	/*multimap 容器的元素的搜索1*/
{
	// 创建 multimap 容器对象 mm
	typedef multimap<char*, CourseRecord::CourseInfo>  coursemmap;
	coursemmap  mm;
	// 插入第1条记录
	CourseRecord  course1 = CourseRecord("张三","操作系统开发",60,"必修");
	pair<char*, CourseRecord::CourseInfo>  pairCourse1(course1.teacher, course1.cf);
	mm.insert(pairCourse1);

	// 插入第2条记录
	CourseRecord  course2 = CourseRecord("李四","编译器开发",30,"必修");
	pair<char*, CourseRecord::CourseInfo>  pairCourse2(course2.teacher, course2.cf);
	mm.insert(pairCourse2);


	// 插入第3条记录
	CourseRecord  course3 = CourseRecord("李四","数据结构",20,"必修");
	pair<char*, CourseRecord::CourseInfo>  pairCourse3(course3.teacher, course3.cf);
	mm.insert(pairCourse3);


	// 插入第4条记录
	CourseRecord  course4 = CourseRecord("李四","Java开发应用",38,"选修");
	pair<char*, CourseRecord::CourseInfo>  pairCourse4(course4.teacher, course4.cf);
	mm.insert(pairCourse4);

	// 插入第5条记录
	CourseRecord  course5 = CourseRecord("王五","C++程序设计",58,"必修");
	pair<char*, CourseRecord::CourseInfo>  pairCourse5(course5.teacher, course5.cf);
	mm.insert(pairCourse5);

	// 记录搜索
	cout << "搜索<李四老师>的任课记录：\n";
	pair<coursemmap::iterator, coursemmap::iterator>  p = mm.equal_range("李四");
	// 打印结果
	coursemmap::iterator  i;
	for (i=p.first; i!=p.second; ++i)
		cout << (*i).first << "		"
		<< (*i).second.course << "		"
		<< (*i).second.period << "学时	"
		<< (*i).second.required << "		"
		<< endl;
	cout << endl << endl;

	return 0;
}

