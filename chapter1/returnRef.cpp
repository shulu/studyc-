#include<iostream>
using namespace std;
int oneX = 10;
int oneY = 20;
int & refValue(int & x)
{
	return x;
}
int main()
{
	int a = 10;
	int & b = a;
	b = 20;
	cout<<"a = "<<a<<endl; 
	refValue(oneX) = 30;
	cout<<"oneX = "<<oneX<<endl;
	refValue(oneY) = 40;
	cout<<"oneY = "<<oneY<<endl;
	return 0;
}
