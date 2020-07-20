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
		friend myComplex addCom(myComplex c1, myComplex c2); //成员函数, 调用者对象与参数对象c相加
		friend void outCom(myComplex c); //成员函数 输出调用者对象相关数据 
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
myComplex addCom(myComplex c1, myComplex c2)
{
	return myComplex(c1.real + c2.real, c1.image + c2.image);
}
void outCom(myComplex c)
{
	cout<<"("<<c.real<<","<<c.image<<")";
}
int main()
{
	myComplex c1(1, 2), c2(3, 5), res;
	res = addCom(c1, c2); //调用成员函数必须通过类对象
	outCom(c1);
	cout<<"+";
	outCom(c2);
	cout<<"=";
	outCom(res);
	cout<<endl;
	return 0;
}	
