#include<iostream>
using namespace std;
class pointer
{
	public:
		int a;
		int * p;
		pointer()	
		{
			a = 100;
			p = new int(10);
		}
		pointer(const pointer &tempp)	//��ֵ���캯�� 
		{
			if(this != &tempp)	//����a=a�����ĸ�ֵ 
			{
				a = tempp.a;
				p = tempp.p;
			}
		}
};
int main() 
{
	pointer p1;		//ʹ��Ĭ�Ϲ��캯�� 
	pointer p2(p1);		//ʹ�ø��ƹ��캯�� 
	pointer p3 = p1;	//ʹ�ø��ƹ��캯��
	cout<<"\n ��ʼ���� �������ֵ���ڴ��ַ"<<endl;
	cout<<"������\t�����ַ		a��ֵ		p�е�ֵ pָ���ֵ		p�ĵ�ַ"<<endl;
	cout<<"p1:\t"<<&p1<<",		"<<p1.a<<",		"<<p1.p<<",		"<<*p1.p<<",		"<<&p1.p<<endl;
	cout<<"p2:\t"<<&p2<<",		"<<p2.a<<",		"<<p2.p<<",		"<<*p2.p<<",		"<<&p2.p<<endl;
	cout<<"p3:\t"<<&p2<<",		"<<p3.a<<",		"<<p3.p<<",		"<<*p3.p<<",		"<<&p3.p<<endl;
	*p1.p = 20;
	p2.a = 300;
	cout<<"\n �޸ĺ� �������ֵ���ڴ��ַ"<<endl;
	cout<<"������\t�����ַ		a��ֵ		p�е�ֵ pָ���ֵ		p�ĵ�ַ"<<endl;
	cout<<"p1:\t"<<&p1<<",		"<<p1.a<<",		"<<p1.p<<",		"<<*p1.p<<",		"<<&p1.p<<endl;
	cout<<"p2:\t"<<&p2<<",		"<<p2.a<<",		"<<p2.p<<",		"<<*p2.p<<",		"<<&p2.p<<endl;
	cout<<"p3:\t"<<&p2<<",		"<<p3.a<<",		"<<p3.p<<",		"<<*p3.p<<",		"<<&p3.p<<endl;
	return 0; 
}
