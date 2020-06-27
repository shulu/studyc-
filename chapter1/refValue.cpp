#include<iostream>
using namespace std;
int main()
{
	// 变量T 变量的引用T& 常变量CT 常引用 CT&
	const int cInt =30;
	int oneInt = 50;
	int &ref = oneInt; //T&<-T;
	const int & rc1 = cInt; //CT&<-CT, CT&是类型T的常引用 
	const int & rc2 = oneInt; //CT&<-T
	const int & rc3 = ref; //CT&<-T&
	int dInt = ref; //T<-T&
	int eInt = cInt; //T<-CT 
	int fInt = rc1; //T<-CT&
	const int gInt = oneInt; //CT<-T
	int &ref1 = ref; //T&<-T&
	const int hInt = ref; //CT<-T& 
	const int jInt = cInt; //CT<-CT
	const int &mInt = rc1; //CT&<-CT& 
	const int nInt = rc2; //CT<-CT&
	cout<<"OK"<<endl;
	int & r2 = (int &) rc1; //T&<-强制类型转换CT& 
	int & r3 = (int &) cInt; //T&<-强制类型转换CT 
	return 0;
}
