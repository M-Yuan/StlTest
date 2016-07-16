// MultiMapTest03.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

/****************************************************************************************************
	���ڼ�ֵ�����ظ����룬�� multimap �����о���ͬһ����ֵ��Ԫ���п��ܲ�ֻһ������ˣ�multimap ������ find ����
�����ص�һ����������Ԫ��λ�ã����Ԫ�ز����ڣ��򷵻� end ����Ԫ��λ�á�equal_range �����򷵻�һ����ָʾ���Ԫ�ط�
Χ����� pair ����
****************************************************************************************************/

// �γ̼�¼�ṹ��
struct CourseRecord
{
	// �γ���Ϣ�ṹ��
	struct CourseInfo
	{
		char* course;  // �γ���
		int  period;   // ѧʱ
		char* required; // ���޻�ѡ��
	};

	char* teacher;  // �ον�ʦ
	CourseInfo  cf;
	CourseRecord(char* teacher_, char* course_, int period_, char* required_)
	{
		teacher = teacher_;
		cf.course = course_;
		cf.period = period_;
		cf.required = required_;
	}
};

int _tmain(int argc, _TCHAR* argv[])	/*multimap ������Ԫ�ص�����1*/
{
	// ���� multimap �������� mm
	typedef multimap<char*, CourseRecord::CourseInfo>  coursemmap;
	coursemmap  mm;
	// �����1����¼
	CourseRecord  course1 = CourseRecord("����","����ϵͳ����",60,"����");
	pair<char*, CourseRecord::CourseInfo>  pairCourse1(course1.teacher, course1.cf);
	mm.insert(pairCourse1);

	// �����2����¼
	CourseRecord  course2 = CourseRecord("����","����������",30,"����");
	pair<char*, CourseRecord::CourseInfo>  pairCourse2(course2.teacher, course2.cf);
	mm.insert(pairCourse2);


	// �����3����¼
	CourseRecord  course3 = CourseRecord("����","���ݽṹ",20,"����");
	pair<char*, CourseRecord::CourseInfo>  pairCourse3(course3.teacher, course3.cf);
	mm.insert(pairCourse3);


	// �����4����¼
	CourseRecord  course4 = CourseRecord("����","Java����Ӧ��",38,"ѡ��");
	pair<char*, CourseRecord::CourseInfo>  pairCourse4(course4.teacher, course4.cf);
	mm.insert(pairCourse4);

	// �����5����¼
	CourseRecord  course5 = CourseRecord("����","C++�������",58,"����");
	pair<char*, CourseRecord::CourseInfo>  pairCourse5(course5.teacher, course5.cf);
	mm.insert(pairCourse5);

	// ��¼����
	cout << "����<������ʦ>���ομ�¼��\n";
	pair<coursemmap::iterator, coursemmap::iterator>  p = mm.equal_range("����");
	// ��ӡ���
	coursemmap::iterator  i;
	for (i=p.first; i!=p.second; ++i)
		cout << (*i).first << "		"
		<< (*i).second.course << "		"
		<< (*i).second.period << "ѧʱ	"
		<< (*i).second.required << "		"
		<< endl;
	cout << endl << endl;

	return 0;
}

