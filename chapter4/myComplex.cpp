#include<iostream>
#include<string>
#include<cstdlib>
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
		friend ostream &operator<<(ostream & os, const myComplex &c); //友元 插入 
		friend istream &operator>>(istream & is, myComplex & c);	//友元  提取 
		ostream & operator<<(ostream & os); //成员函数 插入 
		//operator double()	//重载强制类型转换符double 
		//{
		//	return real;
		//}
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
ostream & operator<<(ostream & os, const myComplex & c) 
{
	if(c.image >= 0)
		os<<c.real<<"+"<<c.image<<"i"; //以a+bi的形式输出 
	else
		os<<c.real<<"-" <<(-c.image)<<"i";
	return os;
}
ostream & myComplex::operator<<(ostream & os) 
{
	if(this->image >= 0)
		os<<this->real<<"+"<<this->image<<"i"; //以a+bi的形式输出 
	else
		os<<this->real<<"-" <<(-this->image)<<"i";
	return os;
}
istream & operator>>(istream & is, myComplex & c)
{
	string s;
	is>>s; //讲a+bi作为字符串读入, a+bi中间不能有空格
	int pos = s.find("+", 0);	//查找虚部 
	if(pos==-1) pos = s.find("-", 1);	//虚数为复数时 
	string sReal = s.substr(0, pos);	//分理处代表实部的字符串
	c.real = atof(sReal.c_str());	//atof()能将参数内容转换成浮点数
	sReal = s.substr(pos, s.length()-pos-1);	//分理出代表虚部的字符串
	c.image = atof(sReal.c_str()) ;
	return is;
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
	myComplex c1(1.2,3.4), c2(3,4), c3, c4, res;
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
	//cout<<(double)c1<<endl;
	int n;
	cout<<"请输入两个复数([-]a±bi)和一个整数, 以空格分隔"<<endl;
	cin>>c3>>c4>>n;
	cout<<c3<<"," <<n<<","<<c4;
	c4<<(c3<<cout<<",")<<c4;
	return 0;
}
