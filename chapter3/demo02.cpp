#include<iostream>
using namespace std;

class point
{
	private:
		float x;
	public:
		void f(float a)
		{
			x = a;	
		}
		void f()		
		{
			x = 0;
		}
		friend float max(point &a, point &b);
};
float max(point &a, point &b)
{
	return (a.x> b.x)?a.x:b.x;
}
int main()
{
	point a, b;
	float maxAb;
	a.f(2.2);
	b.f(3.3);
	maxAb = max(a,b);
	cout<<maxAb<<endl;
	return 0;
}
