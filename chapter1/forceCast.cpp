#include<iostream> 
using namespace std;
int main()
{
	int a= 10;
	const int *p = &a;	//����ʹ�ó���ָ��p�޸�a��ֵ
	const int ca = 30;  //��const����
	int *q;
	cout<<"a�ĵ�ַΪ: \t"<<&a<<"\ta��ֵΪ"<<a<<endl;
	cout<<"*pָ��ĵ�ַΪ��"<<p<<"\t*p��ֵΪ��\t"<<*p<<endl;
	q = const_cast<int *>(p); //ȥ��p�����Ը���q ���дq=p�ᱨ��
	*q = 20; //���д*p=20�Ǵ����
	cout<<"a�ĵ�ַΪ��\t" <<&a<<"\ta��ֵΪ��\t"<<a<<endl;
	cout<<"*pָ��ĵ�ַΪ��"<<p<<"\t*p��ֵΪ��\t"<<*p<<endl;
	cout<<"*qָ��ĵ�ַΪ��"<<q<<"\t*q��ֵΪ��\t"<<*q<<endl;
	cout<<"�ֽ���"<<endl;
	p = &ca; //ca��ֵ���ܲ����޸�
	q = const_cast<int *>(p); //ȥ��p�ĳ����Ը���q�����дq=p�ᱨ��
	*q = 40; //*p=40 ����
	cout<<"ca�ĵ�ַΪ��\t"<<&ca<<"\tca��ֵΪ��\t"<<ca<<endl;
	cout<<"*pָ��ĵ�ַΪ��"<<p<<"\t*p��ֵΪ��\t"<<*p<<endl;
	cout<<"*qָ��ĵ�ַΪ��"<<q<<"\t*q��ֵΪ��\t"<<*q<<endl;
	return 0; 
	
}
