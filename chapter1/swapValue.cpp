#include<iostream>
using namespace std;
void SwapValue(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout<<"SwapValue交换之后的值a "<<a<<" b:"<<b<<endl;
	return;
}
void SwapRef(int & a, int & b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout<<"SwapRef交换之后的值a "<<a<<" b:"<<b<<endl;
	return;
}
int main()
{
	int a = 10, b = 20;
	cout<<"数据交换前：\t\ta = "<<a<<",b="<<b<<endl<<endl;
	SwapValue(a, b);
	cout<<"调用SwapValue后：\t\ta="<<a<<", b="<<b<<endl;
	a = 10;
	b = 20;
	SwapRef(a, b);
	cout<<"调用SwapRef()后:\t\ta="<<a<<", b="<<b<<endl;
	return 0;
}
