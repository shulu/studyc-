#include<iostream>
using namespace std;
void SwapValue(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout<<"SwapValue����֮���ֵa "<<a<<" b:"<<b<<endl;
	return;
}
void SwapRef(int & a, int & b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout<<"SwapRef����֮���ֵa "<<a<<" b:"<<b<<endl;
	return;
}
int main()
{
	int a = 10, b = 20;
	cout<<"���ݽ���ǰ��\t\ta = "<<a<<",b="<<b<<endl<<endl;
	SwapValue(a, b);
	cout<<"����SwapValue��\t\ta="<<a<<", b="<<b<<endl;
	a = 10;
	b = 20;
	SwapRef(a, b);
	cout<<"����SwapRef()��:\t\ta="<<a<<", b="<<b<<endl;
	return 0;
}
