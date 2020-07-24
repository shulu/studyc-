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
		friend myComplex operator-(const myComplex &c1, const myComplex &c2); //��Ԫ���� 
		friend myComplex operator-(const myComplex &c1, double r);
		friend myComplex operator-(double r, const myComplex &c1);
		friend ostream &operator<<(ostream & os, const myComplex &c); //��Ԫ ���� 
		friend istream &operator>>(istream & is, myComplex & c);	//��Ԫ  ��ȡ 
		ostream & operator<<(ostream & os); //��Ա���� ���� 
		//operator double()	//����ǿ������ת����double 
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
		os<<c.real<<"+"<<c.image<<"i"; //��a+bi����ʽ��� 
	else
		os<<c.real<<"-" <<(-c.image)<<"i";
	return os;
}
ostream & myComplex::operator<<(ostream & os) 
{
	if(this->image >= 0)
		os<<this->real<<"+"<<this->image<<"i"; //��a+bi����ʽ��� 
	else
		os<<this->real<<"-" <<(-this->image)<<"i";
	return os;
}
istream & operator>>(istream & is, myComplex & c)
{
	string s;
	is>>s; //��a+bi��Ϊ�ַ�������, a+bi�м䲻���пո�
	int pos = s.find("+", 0);	//�����鲿 
	if(pos==-1) pos = s.find("-", 1);	//����Ϊ����ʱ 
	string sReal = s.substr(0, pos);	//��������ʵ�����ַ���
	c.real = atof(sReal.c_str());	//atof()�ܽ���������ת���ɸ�����
	sReal = s.substr(pos, s.length()-pos-1);	//����������鲿���ַ���
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
	res.outCom("ִ�� res = c1+c2->\tres");
	res = c1.addCom(c2);
	res.outCom("ִ�� res=c1.addCom(c2)->\tres");
	res = c1+5;
	res.outCom("ִ�� res = c1+5->\tres");
	res = 5+c1;
	res.outCom("ִ�� res = 5+c1->\tres");
	res = c1;
	c1.outCom("\t\t\tc1");
	res.outCom("ִ�� res = c1->\t\tres");
	c1.changeReal(-3);
	c1.outCom("ִ�� c1.changeReal(-3)->\tc1");
	res.outCom("\t\t\tres");
	res = c1;
	res.outCom("ִ�� res = c1->\t\tres");
	res = 7;
	res.outCom("ִ�� res = 7->\t\tres");
	res = 7+8;
	res.outCom("ִ�� res=(7+8->\tres)");
	res = c1 = c2;
	c1.outCom("\t\t\tc1");
	c2.outCom("\t\t\tc2");
	res.outCom("ִ�� res = c1 = c2->\tres");
	//cout<<(double)c1<<endl;
	int n;
	cout<<"��������������([-]a��bi)��һ������, �Կո�ָ�"<<endl;
	cin>>c3>>c4>>n;
	cout<<c3<<"," <<n<<","<<c4;
	c4<<(c3<<cout<<",")<<c4;
	return 0;
}
