#include <iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public :
	A(int aa, int bb)
	{
		a = aa--;
		cout<<a<<endl;
		b = a*bb;gtgtgtgtgt
		cout<<b<<endl;
	}
	void printAB()
	{
		cout<<a<<" "<<b<<endl;
	}
};

int main()
{
	A x(4,5);
	x.printAB();
}
