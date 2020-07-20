#include<iostream>
using namespace std;
//类成员函数实现复数类操作 
class myComplex		//复数类 
{
	private:
		double real, image; //复数的实部和虚部 
	public:
		myComplex();
		myComplex(double r, double i);
		myComplex addCom(myComplex c); //成员函数, 调用者对象与参数对象c相加
		void outCom(); //成员函数 输出调用者对象相关数据 
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
myComplex myComplex::addCom(myComplex c)
{
	return myComplex(real + c.real, image + c.image);
}
void myComplex::outCom()
{
	cout<<"("<<real<<","<<image<<")";
}
int main()
{
	myComplex c1(1, 2), c2(3, 5), res;
	res = c1.addCom(c2); //调用成员函数必须通过类对象
	c1.outCom();
	cout<<"+";
	c2.outCom();
	cout<<"=";
	res.outCom();
	cout<<endl;
	return 0;
}
