#include<iostream>
using namespace std;
class myDate
{
	public:
		myDate(); //构造函数
		myDate(int, int, int); //构造函数
		void setDate(int, int, int); //设置日期
		void setDate(myDate); //设置日期  
		myDate getDate(); //获取日期
		void setYear(int); //设置年
		int getMonth() ; //获取月
		void printDate() const; //打印日期
	private:
		int year, month, day; //成员变量 标识年 月 日	 
};

//在类外定义成员函数
myDate::myDate()
{
	year = 1970, month = 1, day = 1;
}
myDate::myDate(int y, int m, int d)
{
	year = y; month = m; day = d;
}
//构造函数的定义 
myDate::myDate():year(1970),month(1),day(1);
myDate::myDate(int y, int m, int d):year(y),monthm1),day(d);
void myDate::setDate(int y, int m, int d)
{
	year = y; month = m; day = d;
}
void myDate::setDate(myDate oneD)
{
	year = oneD.year; month = oneD.month; day = oneD.day;
}
myDate myDate::getDate()
{
	return *this;
}
void myDate::setYear(int y)
{
	year = y;
	return;
}
int myDate::getMonth()
{
	return month;
}
void myDate::printDate() const
{
	cout<<year<<"/"<<month<<"/"<<day<<endl;
	return;
}
 
