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
		friend myComplex addCom(myComplex c1, myComplex c2); //��Ա����, �����߶������������c���
		friend void outCom(myComplex c); //��Ա���� ��������߶���������� 
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
	res = addCom(c1, c2); //���ó�Ա��������ͨ�������
	outCom(c1);
	cout<<"+";
	outCom(c2);
	cout<<"=";
	outCom(res);
	cout<<endl;
	return 0;
}	
