#include<iostream>
#include<cmath>
using namespace std;
class Pixel; //ǰ����������
class Test
{
	public:
		void printX(Pixel p); //�õ�����Pixel 
};
class Pixel
{
	private:
		int x,y;
	public:
		Pixel(int x0, int y0)	
		{
			x = x0;
			y = y0;
		}
		void printxy()
		{
			cout<<"pixel:("<<x<<","<<y<<")"<<endl;
		}
		friend double getDist(Pixel p1, Pixel p2); //��Ԫ����(ԭ��) 
		friend void Test::printX(Pixel p); //��Test�ĳ�Ա����Ϊ����� ��Ԫ���� 
};
void Test::printX(Pixel p)
{
	cout<<"x="<<p.x<<"\ty="<<p.y<<endl;
	return;
}
double getDist(Pixel p1, Pixel p2)  //��Ԫ�����������ⶨ��
{
	double xd = double(p1.x - p2.x);
	double yd = double(p1.y - p2.y);
	return sqrt(xd*xd + yd*yd);
}
int main()
{
	Pixel p1(0,0), p2(10,10);
	p1.printxy();
	p2.printxy();
	cout<<"(p1, p2)��ľ��� - "<<getDist(p1, p2)<<endl; //ֱ�ӵ���ȫ�ֺ���
	Test t;
	cout<<"����Ԫ��������� ---"<<endl;
	t.printX(p1); //ͨ�����������ĳ�Ա����
	t.printX(p2);
	return 0;
}
