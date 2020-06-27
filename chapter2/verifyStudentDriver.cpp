#include<iostream>
#include <string>
#include "Student.cpp"
using namespace std;
int main()
{
	Student ss;
	Student *sp = &ss; //指向ss指针的sp 
	//sp = &ss;
	Student &sy = ss; //ss的别名sy 
	int y,m,d;
	string name_;
	cout<<"请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
	cin>>name_>>y>>m>>d;
	ss.setStudent(name_, myDate(y, m, d));
	ss.printStudent();
	sp->setStudent(name_, myDate(y, m, d));
	sp->printStudent();
	sy.setStudent(name_, myDate(y, m, d));
	sy.printStudent();
	return 0; 
}
