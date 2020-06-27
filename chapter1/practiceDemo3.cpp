#include<iostream>
using namespace std;
int bigger(int x, int y)
{
	if(x>y) return x;
	else return y;
}
float bigger(float x, float y)
{
	if(x>y) return x;
	else return y;
}
double bigger(double x, double y)
{
	if(x>y) return x;
	else return y;
}
int main()
{
	int xI = 10, yI = 20;
	float xF = 30, yF = 40;
	double xD = 50, yD = 60;
	cout<<bigger(xI, yF)<<endl;
	return 0;
}
