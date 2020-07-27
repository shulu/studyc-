#include<iostream>
using namespace std;
class CStudent
{
	private:
		string name;
		string id;
		char gender;
		int age;
	public:
		void PrintInfo();
		void SetInfo(const string &, const string &, int ,char);
		void SetName(string);
		string GetName();
		void SetId(string);
		string GetId();
};
void CStudent::PrintInfo()
{
	cout<<"姓名:\t"<<name<<endl;
	cout<<"学号:\t"<<id<<endl;
	cout<<"年龄:\t"<<age<<endl;
	cout<<"性别:\t"<<gender<<endl;
}
void CStudent::SetInfo(const string & name_, const string & id_, int age_,char gender_)
{
	name = name_;
	id = id_;
	age = age_;
	gender = gender_;
}
void CStudent::SetName(string name)
{
	this->name = name;
}
string CStudent::GetName()
{
	return name;
}
void CStudent::SetId(string id)
{
	this->id = id;
}
string CStudent::GetId()
{
	return id;
}

class CUndergraduateStudent:public CStudent
{
	private:
		string department;	//学生所属院系
	public:
		void PrintInfo() ;
		void SetInfo(const string &, const string &, int ,char, const string &);
};
void CUndergraduateStudent::PrintInfo()
{
	CStudent::PrintInfo();
	cout<<"院系:\t"<<department<<endl;
}
void CUndergraduateStudent::SetInfo(const string & name_, const string & id_, int age_,char gender_, const string & department_)
{
	CStudent::SetInfo(name_, id_, age_, gender_);
	department = department_;	
}
class CGraduatedStudent:public CStudent
{
	private:
		string department;
		string advisor; //导师
	public:
		void PrintInfo();
		void SetInfo(const string & name_, const string & id_, int age_,char gender_, const string & department_, const string & advisor_);
};
void CGraduatedStudent::PrintInfo()
{
	CStudent::PrintInfo();
	cout<<"院系\t"<<department<<endl;
	cout<<"导师:\t"<<advisor<<endl<<endl;
}
void CGraduatedStudent::SetInfo(const string & name_, const string & id_, int age_,char gender_, const string & department_, const string & advisor_)
{
	CStudent::SetInfo(name_, id_, age_, gender_);
	department = department_;
	advisor = advisor_;
}
int main()
{
	CStudent s1;
	CUndergraduateStudent s2;
	CGraduatedStudent s3;
	s2.SetInfo("小张", "2018-6-2-4", 19, 'M', "数学系");
	s3.SetInfo("小李", "M2017-9", 23, 'F', "计算机学院", "孟教授");
	s2.PrintInfo();
	s3.PrintInfo();
	cout<<s2.GetName()<<endl;
	s2.SetName("张一");
	cout<<s2.GetName()<<","<<s2.GetId()<<endl;
	return 0;
}