#include<iostream>
using namespace std;
class myDate
{
	public:
		myDate(); //���캯��
		myDate(int, int, int); //���캯��
		void setDate(int, int, int); //��������
		void setDate(myDate); //��������  
		myDate getDate(); //��ȡ����
		void setYear(int); //������
		int getMonth() ; //��ȡ��
		void printDate() const; //��ӡ����
	private:
		int year, month, day; //��Ա���� ��ʶ�� �� ��	 
};

//�����ⶨ���Ա����
myDate::myDate()
{
	year = 1970, month = 1, day = 1;
}
myDate::myDate(int y, int m, int d)
{
	year = y; month = m; day = d;
}
//���캯���Ķ��� 
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
 
