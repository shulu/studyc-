#include<iostream>
#include <string>
#include "Student.cpp"
using namespace std;
int main()
{
	Student ss;
	Student *sp = &ss; //ָ��ssָ���sp 
	//sp = &ss;
	Student &sy = ss; //ss�ı���sy 
	int y,m,d;
	string name_;
	cout<<"������ѧ�������������գ�������\"�� �� ��\"�Ĵ������룺";
	cin>>name_>>y>>m>>d;
	ss.setStudent(name_, myDate(y, m, d));
	ss.printStudent();
	sp->setStudent(name_, myDate(y, m, d));
	sp->printStudent();
	sy.setStudent(name_, myDate(y, m, d));
	sy.printStudent();
	return 0; 
}
