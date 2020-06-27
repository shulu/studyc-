#include<iostream>
using namespace std;
#include<cmath>
int f(int);
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		cout<<f(i)<<endl;
	}
}
int f(int a)
{
	int b=0,c=1;
	cout<<"b= "<<b<<"c= "<<c<<endl;
	b++;c++;
	cout<<"b= "<<b<<"c= "<<c<<endl;
	return int(a+pow(double(b),2)+c);
}
