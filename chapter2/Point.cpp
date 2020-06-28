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
		double calculateDistanceToZero(); //���㶨�㵽 0.0�ľ��� 
		double calculateDistanceBetweenPoint(Point m); //���� ������֮��ľ��� 
		bool isTriangle(Point m, Point n); //������������������Ƿ񹹳������� 
	private:
		int x,y; //������ĵ� x y	
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
	cout<<"����ƽ���ĳ���Ϊ: "<<distance<<endl;
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
//��������,������������ľ���,������֮�ʹ��ڵ�����������.Ҫÿ�����߶�����
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
	cout<<"�������һ������ x y"<<endl;
	cin>>tmpX>>tmpY;
	pa.setX(tmpX);
	pa.setY(tmpY);
	distance = pa.calculateDistanceToZero();
	cout<<"���㵽��0,0���ľ���Ϊ"<<distance<<endl;
	cout<<"������ڶ������� x y"<<endl;
	cin>>tmpX>>tmpY;
	pb.setX(tmpX);
	pb.setY(tmpY);
	distance = pa.calculateDistanceBetweenPoint(pb);
	cout<<"��һ�����㵽�ڶ�������ľ���Ϊ"<<distance<<endl;
	cout<<"������ڶ������� x y"<<endl;
	cin>>tmpX>>tmpY;
	pc.setX(tmpX);
	pc.setY(tmpY);
	isTriangle = pa.isTriangle(pb, pc);
	if(isTriangle)
	{
		cout<<"�����㹹��������"<<endl;	
	}else{
		cout<<"�����㲻����������"<<endl;
	}
}
