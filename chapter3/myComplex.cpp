#include<iostream>
using namespace std;
//���Ա����ʵ�ָ�������� 
class myComplex		//������ 
{
	private:
		double real, image; //������ʵ�����鲿 
	public:
		myComplex();
		myComplex(double r, double i);
		myComplex addCom(myComplex c); //��Ա����, �����߶������������c���
		void outCom(); //��Ա���� ��������߶���������� 
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
	res = c1.addCom(c2); //���ó�Ա��������ͨ�������
	c1.outCom();
	cout<<"+";
	c2.outCom();
	cout<<"=";
	res.outCom();
	cout<<endl;
	return 0;
}
