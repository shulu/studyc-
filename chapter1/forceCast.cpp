#include<iostream> 
using namespace std;
int main()
{
	int a= 10;
	const int *p = &a;	//不能使用常量指针p修改a的值
	const int ca = 30;  //被const修饰
	int *q;
	cout<<"a的地址为: \t"<<&a<<"\ta的值为"<<a<<endl;
	cout<<"*p指向的地址为："<<p<<"\t*p的值为：\t"<<*p<<endl;
	q = const_cast<int *>(p); //去除p常量性赋给q 如果写q=p会报错
	*q = 20; //如果写*p=20是错误的
	cout<<"a的地址为：\t" <<&a<<"\ta的值为：\t"<<a<<endl;
	cout<<"*p指向的地址为："<<p<<"\t*p的值为：\t"<<*p<<endl;
	cout<<"*q指向的地址为："<<q<<"\t*q的值为：\t"<<*q<<endl;
	cout<<"分界线"<<endl;
	p = &ca; //ca的值不能不能修改
	q = const_cast<int *>(p); //去除p的常量性赋给q，如果写q=p会报错
	*q = 40; //*p=40 错误
	cout<<"ca的地址为：\t"<<&ca<<"\tca的值为：\t"<<ca<<endl;
	cout<<"*p指向的地址为："<<p<<"\t*p的值为：\t"<<*p<<endl;
	cout<<"*q指向的地址为："<<q<<"\t*q的值为：\t"<<*q<<endl;
	return 0; 
	
}
