#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159;
class Cylinder
{
	public:
		void setR(double x);
		void setH(double y);
		double getBottomCircleLength();
		double getBottonCircleArea();
		double getCylinderBuld();
		double getCylinderSurfaceArea();
	private:
		double r,h;
};
void Cylinder::setR(double x)
{
	r = x;
}
void Cylinder::setH(double y)
{
	h = y;
}
double Cylinder::getBottomCircleLength()
{
	return 2*PI*r;
}
double Cylinder::getBottonCircleArea()
{
	return PI*pow(r,2);
}
double Cylinder::getCylinderBuld()
{
	return PI*h*pow(r,2);
}
double Cylinder::getCylinderSurfaceArea()
{
	return 2*PI*r*(r+h);
}
int main()
{
	Cylinder cylinder;
	double tmpx, tmpy;
	cout<<"请输入圆柱体的底半径和高"<<endl;
	cin>>tmpx>>tmpy;
	cylinder.setR(tmpx);
	cylinder.setH(tmpy);
	double cylinderSurfaceArea = cylinder.getCylinderSurfaceArea();
	double cylinderBulk = cylinder.getCylinderSurfaceArea();
	cout<<"该圆柱体的表面积为："<<cylinderSurfaceArea<<"体积为："<<cylinderBulk<<endl; 
}
