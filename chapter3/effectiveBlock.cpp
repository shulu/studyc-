#include<iostream> 
using namespace std;
int main()
{
	int i = 10; //整形变量i 具有函数做用户 
	char ch = '1'; //字符型变量ch 具有函数作用域
	cout<<"在 main 中 --i="<<i<<",\tch="<<ch<<endl;
	{
		int i = 20; //另一个整形变量i 外层块作用域
		char ch = '2'; //另一个字符型变量ch 外层块作用域
		cout<<"在外层块 --i =" <<i<<",\tch=" <<ch<<endl;
		if(i>0)
		{  
			double i = 30.3; //双进度i 内层块zuoyongyu
			int ch = 33; //整形变量ch 内层块作用域
			cout<<"在内层块 --i="<<i<<",\tch = " <<ch<<endl;
		}
		cout<<"在外层块 --i =" <<i<<",\tch=" <<ch<<endl;
	}
	cout<<"在 main 中 --i="<<i<<",\tch="<<ch<<endl;
	return 0;
}
