#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	public:
		void setX(int px);
		void setY(int py);
		int getX();
		int getY();
		double calculateDistanceToZero(); //计算定点到 0.0的距离 
		double calculateDistanceBetweenPoint(Point m); //计算 两定点之间的距离 
		bool isTriangle(Point m, Point n); //计算给定的三个顶点是否构成三角形 
	private:
		int x,y; //坐标轴的点 x y	
};
void Point::setX(int px)
{
	x = px;
}
void Point::setY(int py)
{
	y = py;
}
int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}
double Point::calculateDistanceToZero() 
{
	double distance = pow(this->x, 2)+pow(this->y, 2);
	cout<<"两点平方的长度为: "<<distance<<endl;
	distance =  sqrt(distance);
	return distance;
}
double Point::calculateDistanceBetweenPoint(Point m)
{
	int px = pow(this->x-m.x, 2);
	int py = pow(this->y-m.y, 2);
	double distance = sqrt(px+py);
	return distance;
}
//根据坐标,算出任意两点间的距离,以两边之和大于第三边来检验.要每两条边都检验
bool Point::isTriangle(Point m, Point n)
{
	double a, b, c;
	a = this->calculateDistanceBetweenPoint(m);
	b = this->calculateDistanceBetweenPoint(n);
	c = m.calculateDistanceBetweenPoint(n);
	if((a+b>c) && (a+c>b) && (b+c)>a)
	{
		return true;
	}else{
		return false;
	}
	
}
int main()
{
	Point pa, pb, pc; 
	double distance;
	bool isTriangle;
	int tmpX,tmpY;
	cout<<"请输入第一个坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pa.setX(tmpX);
	pa.setY(tmpY);
	distance = pa.calculateDistanceToZero();
	cout<<"定点到（0,0）的距离为"<<distance<<endl;
	cout<<"请输入第二个坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pb.setX(tmpX);
	pb.setY(tmpY);
	distance = pa.calculateDistanceBetweenPoint(pb);
	cout<<"第一个定点到第二个定点的距离为"<<distance<<endl;
	cout<<"请输入第二个坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pc.setX(tmpX);
	pc.setY(tmpY);
	isTriangle = pa.isTriangle(pb, pc);
	if(isTriangle)
	{
		cout<<"三个点构成三角形"<<endl;	
	}else{
		cout<<"三个点不构成三角形"<<endl;
	}
}
