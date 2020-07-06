#include<iostream>
using namespace std;
class CTyre //轮胎类 
{
	private:
		int radius; //半径
		int width; //宽度
	public:
		//构造函数
		CTyre():radius(16),width(185)
		{
			cout<<radius<<"\tCTyre 构造函数"<<endl;
		}
		//构造函数
		CTyre(int r, int w) :radius(r),width(w)
		{
			cout<<radius<<"\tCTyre 构造函数"<<endl;
		}
		~CTyre()
		{
			cout<<radius<<"\tCTyre 析构函数"<<endl;
		}
		int getRadius() 
		{
			return radius;
		}
		int getWidth()
		{
			return width;
		}
};
class CCar //汽车类 封闭类 
{
	private:
		int price; //价格
		CTyre tyre; //成员对象
	public:
		CCar();
		CCar(int p, int tr, int tw);
		~CCar();
		int getPrice()
		{
			return price;
		}
		CTyre getCTyre()
		{
			return tyre;
		}
};
CCar::CCar()
{
	price = 50010;
	CTyre();
	cout<<price<<"\tCCar 构造函数"<<endl;
}
//使用初始化列表
CCar::CCar(int p, int tr, int tw):price(p), tyre(tr, tw)
{
	cout<<price<<"\tCCar 构造函数"<<endl;
};
CCar::~CCar()
{
	cout<<price<<"\tCCar 析构函数"<<endl;
}
int main() 
{
	CCar car(48900, 17, 225);
	cout<<"price="<<car.getPrice();
	cout<<"\tCTyre.Radius="<<car.getCTyre().getRadius()
		<<"\tCtyre.Width=" <<car.getCTyre().getWidth()<<endl;
	CCar car1;
	cout<<"price="	<<car1.getPrice();
	cout<<"\tCTyre.Radius="<<car1.getCTyre().getRadius()
		<<"\tCTyre.Width="<<car1.getCTyre().getWidth()<<endl;
	return 0;
}
