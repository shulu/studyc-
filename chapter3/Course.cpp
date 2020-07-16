#include<iostream>
#include<string>
using namespace std;
class Course
{
	public:
		static int num;
		Course()
		{
			num++;
		}
		Course(string n, int c, int p, string t, string m)
		{
			courseName = n;
			courseCredit = c;
			coursePeriod = p;
			courseType = t;
			courseMajor = m;
			num++;
		}
		Course(Course &c)
		{
			courseName = c.courseName;
		}
		~Course()
		{
			cout<<"析构"<<this<<endl;
		}
		void setCourseName(string);
		void setCourseCredit(int);
		void setCoursePeriod(int);
		void setCourseType(string);
		void setCourseMajor(string);
		string getCourseName(); //
		int getCourseCredit();
		int getCoursePeriod();
		string getCourseType();
		string getCourseMajor();
		static void printClassNum()
		{
			cout<<"current_course_num:"<<num<<endl;
		}
	private:
		string courseName; //课程名称 
		int courseCredit; //学分 
		int coursePeriod; //学时数 
		string courseType; //课程类别 
		string courseMajor;	//授课专业 
};
int Course::num = 0;
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
string Course::getCourseName()
{
	return courseName;
}
int Course::getCourseCredit()
{
	return courseCredit;
}
int Course::getCoursePeriod()
{
	return coursePeriod;
}
string Course::getCourseType()
{
	return courseType;
}
string Course::getCourseMajor()
{
	return courseMajor;
}
int main() 
{
	cout<<"this is course"<<endl;
	Course c;
	Course::printClassNum();
}
