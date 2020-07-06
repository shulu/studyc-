#include<iostream>
using namespace std;
class CTyre //��̥�� 
{
	private:
		int radius; //�뾶
		int width; //���
	public:
		//���캯��
		CTyre():radius(16),width(185)
		{
			cout<<radius<<"\tCTyre ���캯��"<<endl;
		}
		//���캯��
		CTyre(int r, int w) :radius(r),width(w)
		{
			cout<<radius<<"\tCTyre ���캯��"<<endl;
		}
		~CTyre()
		{
			cout<<radius<<"\tCTyre ��������"<<endl;
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
class CCar //������ ����� 
{
	private:
		int price; //�۸�
		CTyre tyre; //��Ա����
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
	cout<<price<<"\tCCar ���캯��"<<endl;
}
//ʹ�ó�ʼ���б�
CCar::CCar(int p, int tr, int tw):price(p), tyre(tr, tw)
{
	cout<<price<<"\tCCar ���캯��"<<endl;
};
CCar::~CCar()
{
	cout<<price<<"\tCCar ��������"<<endl;
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
