#include<iostream>
#include "Point.cpp"
using namespace std;
class MyLine
{
	public:
		void setLine(Point x, Point y)
		{
			m = x;
			n = y;
		}
		/*
		* 计算直线的斜率 
		* 斜率的计算方法为(y2-y1)/(x2-x1) 
		*/ 
		double calculateSlope()
		{
			double k;
			int x,y;
			y = m.getY() - n.getY();
			cout<<"y1-y2="<<y<<endl;
			x = m.getX() - n.getX();
			cout<<"x1-x2="<<x<<endl;
			k = (double)y/x;
			cout<<"k="<<k<<endl;
			return k;
		}
		//现根据直线的一般式方程 AX+BY+C
		//A = Y2 - Y1
		//B = X1 - X2
		//C = X2*Y1 - X1*Y2
		//则点x到直线的距离为 abs(a*x+b*y+c)/sqrt(pow(a,2)+pow(b,2))
		double calculatePointToLine(Point x)
		{
			double a, b, c, distance;
			int x1, y1, x2, y2;
			x1 = m.getX();
			x2 = n.getX();
			y1 = m.getY();
			y2 = n.getY();
			a =  y2-y1;
			b = x1-x2;
			c = x2*y1-x1*y2;
			distance = abs(a*x.getX()+b*x.getY()+c)/sqrt(pow(a,2)+pow(b,2));
			return distance;
		}
		//计算直线是否经过定点 
		// k为直线斜率 
		// 公式为i y-b = k(x-a) 
		bool isInLine(Point x)
		{
			double j, k, l; 
			k = this->calculateSlope();
			j = m.getY()-x.getY();
			l = (m.getX()-x.getX())*k;
			if(j == l)
			{
				return true;
			}else{
				return false;
			}
		}
	private:
		Point m;
		Point n;
};
int main()
{
	MyLine line; 
	Point pa, pb, pc; 
	int tmpX,tmpY;
	double k,distance;
	bool inLine;
	cout<<"请输入第一个坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pa.setX(tmpX);
	pa.setY(tmpY);
	cout<<"请输入第二个坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pb.setX(tmpX);
	pb.setY(tmpY);
	line.setLine(pa, pb);
	k = line.calculateSlope();
	cout<<"直线("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")";
	cout<<"的斜率为："<<k<<endl;
	cout<<"请输入定点的坐标 x y"<<endl;
	cin>>tmpX>>tmpY;
	pc.setX(tmpX);
	pc.setY(tmpY);
	inLine = line.isInLine(pc);
	distance = line.calculatePointToLine(pc);
	if(inLine)
	{
		cout<<"定点("<<pc.getX()<<","<<pc.getY()<<")经过";
	}else{
		cout<<"定点("<<pc.getX()<<","<<pc.getY()<<")不经过";
	}
	cout<<"直线("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")"<<"距离为"<<distance<<endl;
} 
