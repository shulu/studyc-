#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
class Point
{
	private:
		int x,y; //������ĵ� x y	
	public:
		static int num;
		Point():x(0),y(0)
		{
			num++; 
		}
		Point(int a, int b):x(a),y(b)
		{
			num++;
		}
		Point(Point &p)
		{
			x = p.x;
			y = p.y;
		}
		Point(const Point &p);
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		double calculateDistanceToZero(); //���㶨�㵽 0.0�ľ��� 
		double calculateDistanceBetweenPoint(Point); //���� ������֮��ľ��� 
		bool isTriangle(Point, Point); //������������������Ƿ񹹳������� 
		friend ostream & operator<<(ostream & os, Point & p);
		friend istream & operator>>(istream & is, Point & p);
		static void printCreatedPoint()
		{
			cout<<"��ǰ������"<<num<<"����"<<endl;
		}
		~Point()
		{
			cout<<"����..."<<x<<" "<<y<<endl;
		}
};
int Point::num = 0;
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
ostream & operator<<(ostream & os, Point & p)
{
	os<<"("<<p.x<<","<<p.y<<")";
	return os;
}
istream & operator>>(istream & is, Point & p)
{
	string s;
	is>>s;
	int pos = s.find(",");
	string xx = s.substr(0, pos);
	string yy = s.substr(pos+1, -1);
	cout<<"pos:"<<pos<<" xx:"<<xx<<" yy:"<<yy<<endl;
	p.x = atoi(xx.c_str());
	p.y = atoi(yy.c_str());
	cout<<p<<endl;
	return is;
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
	Point::printCreatedPoint();
	double distance;
	bool isTriangle;
	int tmpX,tmpY;
	cout<<"�������һ������ x y"<<endl;
	cin>>pa;
	//pa.setX(tmpX);
	//pa.setY(tmpY);
	distance = pa.calculateDistanceToZero();
	cout<<"���㵽��0,0���ľ���Ϊ"<<distance<<endl;
	cout<<"������ڶ������� x y"<<endl;
	cin>>pb;
	//pb.setX(tmpX);
	//pb.setY(tmpY);
	distance = pa.calculateDistanceBetweenPoint(pb);
	cout<<"��һ�����㵽�ڶ�������ľ���Ϊ"<<distance<<endl;
	cout<<"��������������� x y"<<endl;
	cin>>pc;
	//pc.setX(tmpX);
	//pc.setY(tmpY);
	isTriangle = pa.isTriangle(pb, pc);
	if(isTriangle)
	{
		cout<<"�����㹹��������"<<endl;	
	}else{
		cout<<"�����㲻����������"<<endl;
	}
}
