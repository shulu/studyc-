#include<iostream>
using namespace std;
class myComplex
{
	private:
		double real, image;
	public:
		myComplex()	;
		myComplex(double r, double i);
		~myComplex(){};
		myComplex addCom(myComplex c1);
		void outCom();
		void outCom(string s);
		void changeReal(double r);
		friend myComplex operator+(const myComplex &c1, const myComplex &c2);
		friend myComplex operator+(const myComplex &c1, double r);
		friend myComplex operator+(double r, const myComplex &c1);
		friend myComplex operator-(const myComplex &c1, const myComplex &c2); //友元函数 
		friend myComplex operator-(const myComplex &c1, double r);
		friend myComplex operator-(double r, const myComplex &c1);
		myComplex &operator=(const myComplex &c);
		myComplex &operator=(double);
};
myComplex::myComplex()
{
	real = 0;
	image = 0;
}
myComplex::myComplex(double r, double i) 
{
	real = r;
	image = i;
}
myComplex myComplex::addCom(myComplex c1)
{
	return myComplex(this->real+c1.real, this->image+c1.image);
}
void myComplex::outCom()
{
	cout<<"("<<real<<","<<image<<")";
}
void myComplex::outCom(string s)
{
	cout<<s<<"=("<<real<<","<<image<<")"<<endl;
}
void myComplex::changeReal(double r)
{
	this->real=r;
}
myComplex operator+(const myComplex &c1, const myComplex &c2)
{
	return myComplex(c1.real+c2.real, c1.image+c2.image);
}
myComplex operator+(const myComplex &c1, double r)
{
	return myComplex(c1.real+r, c1.image);
}
myComplex operator+(double r, const myComplex &c1)
{
	return myComplex(r+c1.real, c1.image);
}
myComplex operator-(const myComplex &c1, const myComplex &c2)
{
	return myComplex(c1.real-c2.real, c1.image-c2.image);
}
myComplex operator-(const myComplex &c1, double r)
{
	return myComplex(c1.real-r, c1.image);
}
myComplex operator-(double r, const myComplex &c1)
{
	return myComplex(r-c1.real, -c1.image);
}
myComplex &myComplex::operator=(const myComplex &c1)
{
	this->real = c1.real;
	this->image = c1.image;
	return *this;
}
myComplex &myComplex::operator=(double r)
{
	this->real = r;
	this->image = 0;
	return *this;
}
int main()
{
	myComplex c1(1,2), c2(3,4), res;
	c1.outCom("\t\t\tc1");
	c2.outCom("\t\t\tc2");
	res = c1+c2;
	res.outCom("执行 res = c1+c2->\tres");
	res = c1.addCom(c2);
	res.outCom("执行 res=c1.addCom(c2)->\tres");
	res = c1+5;
	res.outCom("执行 res = c1+5->\tres");
	res = 5+c1;
	res.outCom("执行 res = 5+c1->\tres");
	res = c1;
	c1.outCom("\t\t\tc1");
	res.outCom("执行 res = c1->\t\tres");
	c1.changeReal(-3);
	c1.outCom("执行 c1.changeReal(-3)->\tc1");
	res.outCom("\t\t\tres");
	res = c1;
	res.outCom("执行 res = c1->\t\tres");
	res = 7;
	res.outCom("执行 res = 7->\t\tres");
	res = 7+8;
	res.outCom("执行 res=(7+8->\tres)");
	res = c1 = c2;
	c1.outCom("\t\t\tc1");
	c2.outCom("\t\t\tc2");
	res.outCom("执行 res = c1 = c2->\tres");
	return 0;
}
