#include<iostream>
using namespace std;
class Product
{
	char name;
	int count;
	double price;
	double total_price;
	public:
		Product();
		Product(char name, int count, double price)
		{
			name = name;
			count = count;
			price = price;
			total_price = count*price;
		}
		Product(Product &p)
		{
			name = p.name;
			count = p.count;
			price = p.price;
			total_price = p.total_price;
		}
		~Product()
		{
			cout<<"����"<<endl;
		}
		void setName(char name)
		{
			name = name;
		}
		void setCount(double count)
		{
			count = count;
		}
		void set(char price)
		{
			price = price;
			total_price = price*count;
		}
		void importProduct(int);
		void exportProduct(int);
		void printProduct()
		{
			cout<<"��ǰ��Ʒ����Ϊ:"<<name<<"����Ϊ:"<<count<<"�۸�Ϊ"<<price<<"�ܼ�Ϊ:"<<total_price<<endl;
		}
};
Product::Product()
{
	name = 0;
	count = 0;
	price = 0;
	total_price = price*count;
}
void Product::importProduct(int count)
{
	count = count+count;
}
void Product::exportProduct(int count)
{
	count = count-count;
}
int main()
{
	Product p;
	p.printProduct();
}
