#include <iostream>
#include <string>
using namespace std;
int main()
{
	int oneInt1,oneInt2;
	char strArray[20];
	string str;
	double oneDouble;
	char oneChar = 'a';
	cout<<"������������ֵ��һ���ַ���һ���ַ�����һ������ֵ��";
	cout<<"�Կո� Tab�� ��<Enter>���ָ���"<<endl;
	cin>>oneInt1>>oneInt2>>oneChar>>strArray>>oneDouble;
	str = strArray;
	cout<<"�����������:"<<endl;		//endl�������ǻ��� 
	cout<<"�ַ����ǣ�\t\t"<<str<<endl
		<<"��������ֵ�ֱ��ǣ�\t"<<oneInt1<<" ��\t"<<oneInt2<<endl
		<<"�ַ��ǣ�\t\t"<<oneChar<<"\n"
		<<"�������ǣ�\t\t"<<oneDouble<<endl;
	return 0;	 
	
}
