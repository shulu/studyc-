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
	cout<<"�������һ������ x y"<<endl;
	cin>>tmpX>>tmpY;
	pa.setX(tmpX);
	pa.setY(tmpY);
	cout<<"������ڶ������� x y"<<endl;
	cin>>tmpX>>tmpY;
	pb.setX(tmpX);
	pb.setY(tmpY);
	line.setLine(pa, pb);
	k = line.calculateSlope();
	cout<<"ֱ��("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")";
	cout<<"��б��Ϊ��"<<k<<endl;
	cout<<"�����붨������� x y"<<endl;
	cin>>tmpX>>tmpY;
	pc.setX(tmpX);
	pc.setY(tmpY);
	inLine = line.isInLine(pc);
	if(inLine)
	{
		cout<<"����("<<pc.getX()<<","<<pc.getY()<<")����";
	}else{
		cout<<"����("<<pc.getX()<<","<<pc.getY()<<")������";
	}
	cout<<"ֱ��("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")"<<endl;
} 
