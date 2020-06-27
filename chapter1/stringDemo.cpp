#include<iostream>
using namespace std;
int main()
{
	string str1; //声明一个空的string对象 值为"" 
	string city1 = "beijing";
	string str2 = city1;
	cout<<"str1 = "<<str1<<"."<<endl;
	cout<<city1<<"," <<str2<<endl;
	char name[] = "C++Program";
	string s1 = name;
	cout<<"name "<<name<<endl;
	string citys[] = {"beijing","Shanghai","Tianjin","Chongqing"};
	cout<<citys[1]<<endl;
	cout<<sizeof(citys)/sizeof(string)<<endl;
}
