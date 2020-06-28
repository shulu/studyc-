#include<iostream>
#include<string>
using namespace std;
class Course
{
	public:
		void setCourseName(string);
		void setCourseCredit(int);
		void setCoursePeriod(int);
		void setCourseType(string);
		void setCourseMajor(string);
		string getCourseName();
		int getCourseCredit();
		int getCoursePeriod();
		string getCourseType();
		string getCourseMajor();
	private:
		string courseName; //课程名称 
		int courseCredit; //学分 
		int coursePeriod; //学时数 
		string courseType; //课程类别 
		string courseMajor;	//授课专业 
};
void Course::setCourseName(string s)
{
	courseName = s;
}
void Course::setCourseCredit(int i)
{
	courseCredit = i;
}
void Course::setCoursePeriod(int i)
{
	coursePeriod = i;
}
void Course::setCourseType(string s)
{
	courseType = s;
}
void Course::setCourseMajor(string s)
{
	courseMajor = s;	
}
string Course::etCourseName()
{
	return courseName;
}
int Course::getCourseCredit()
{
	return courseCredit;
}
int Course::getCoursePeriod()
{
	return period;
}
string Course::getCourseType()
{
	return courseType;
}
string Course::getCourseMajor()
{
	return courseMajor;
}
