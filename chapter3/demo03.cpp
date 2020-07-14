#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		A(int x = 0, int y = 0):a(x),b(y){}
		void print()
		{
			cout<<a<<","<<b<<endl;
		}
};
int main()
{
	A *p;
	p = new A(4,5);
	p->print();
	return 0;
}
