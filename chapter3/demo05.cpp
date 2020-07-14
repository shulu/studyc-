#include<iostream>
using namespace std;

class exa
{
	int a;
	public:
		exa(int b = 5)
		{
			a = b++;
		}
		void print()
		{
			a = a+1;
			cout<<a<<" ";
		}
		void print()const
		{
			cout<<a<<endl;
		}
};
int main()
{
	exa x;
	const exa y(2);
	x.print();
	y.print();
}
