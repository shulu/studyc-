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
		double calculatePointToLine(Point x)
		{
			
		}
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
	double k;
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
	if(inLine)
	{
		cout<<"定点("<<pc.getX()<<","<<pc.getY()<<")经过";
	}else{
		cout<<"定点("<<pc.getX()<<","<<pc.getY()<<")不经过";
	}
	cout<<"直线("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")"<<endl;
} 
