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
		* ����ֱ�ߵ�б�� 
		* б�ʵļ��㷽��Ϊ(y2-y1)/(x2-x1) 
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
		//�ָ���ֱ�ߵ�һ��ʽ���� AX+BY+C
		//A = Y2 - Y1
		//B = X1 - X2
		//C = X2*Y1 - X1*Y2
		//���x��ֱ�ߵľ���Ϊ abs(a*x+b*y+c)/sqrt(pow(a,2)+pow(b,2))
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
		//����ֱ���Ƿ񾭹����� 
		// kΪֱ��б�� 
		// ��ʽΪi y-b = k(x-a) 
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
	distance = line.calculatePointToLine(pc);
	if(inLine)
	{
		cout<<"����("<<pc.getX()<<","<<pc.getY()<<")����";
	}else{
		cout<<"����("<<pc.getX()<<","<<pc.getY()<<")������";
	}
	cout<<"ֱ��("<<pa.getX()<<","<<pa.getY()<<")";
	cout<<" ("<<pb.getX()<<","<<pb.getY()<<")"<<"����Ϊ"<<distance<<endl;
} 
