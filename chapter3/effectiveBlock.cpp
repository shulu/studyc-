#include<iostream> 
using namespace std;
int main()
{
	int i = 10; //���α���i ���к������û� 
	char ch = '1'; //�ַ��ͱ���ch ���к���������
	cout<<"�� main �� --i="<<i<<",\tch="<<ch<<endl;
	{
		int i = 20; //��һ�����α���i ����������
		char ch = '2'; //��һ���ַ��ͱ���ch ����������
		cout<<"������ --i =" <<i<<",\tch=" <<ch<<endl;
		if(i>0)
		{  
			double i = 30.3; //˫����i �ڲ��zuoyongyu
			int ch = 33; //���α���ch �ڲ��������
			cout<<"���ڲ�� --i="<<i<<",\tch = " <<ch<<endl;
		}
		cout<<"������ --i =" <<i<<",\tch=" <<ch<<endl;
	}
	cout<<"�� main �� --i="<<i<<",\tch="<<ch<<endl;
	return 0;
}
