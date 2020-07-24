#include<iostream>
using namespace std;
class CDemo
{
	private:
		int n;
	public:
		CDemo(int i=0):n(i){}
		CDemo & operator++();	//用于前置形式 
		CDemo operator++(int);	//用于后置形式 
		operator int() {
			return n;
		}
		friend CDemo & operator--(CDemo &);
		friend CDemo operator--(CDemo &, int);
};
CDemo & CDemo::operator++()
{
	n++;
	return *this;
}
CDemo CDemo::operator++(int k)
{
	CDemo tmp(*this); //记录修改前的对象 
	n++;
	return tmp;	//返回修改后的对象 
}
CDemo & operator--(CDemo & d)
{
	d.n--;
	return d;
}
CDemo operator--(CDemo & d, int)
{
	CDemo tmp(d);
	d.n--;
	return tmp;
}
int main()
{
	CDemo d(10);
	cout<<(d++)<<",";
	cout<<d<<",";
	cout<<(++d)<<",";
	cout<<d<<",";
	cout<<(d--)<<",";
	cout<<d<<",";
	cout<<(--d)<<",";
	cout<<d<<endl;
	return 0;
}
