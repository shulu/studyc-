#include<iostream>
using namespace std;
class base
{
	private:
		int m;
	public:
		base(){
			cout<<"this init 0 "<<this<<endl;
		};
		base(int a):m(a){
			cout<<"this init 1 "<<this<<endl;
		};
		int get()
		{
			cout<<"this get "<<this<<endl;
			return m;
		}
		void set(int a)
		{
			cout<<"this set "<<this<<endl;
			m = a;
		}
};
int main()
{
	base *ptr = new base[2];
	ptr->set(30);
	ptr = ptr+1;
	ptr->set(50);
	base a[2] = {1,9};
	cout<<siezeof(a[0])<<endl;
	cout<<a[0].get()<<","<<a[1].get()<<endl;
	cout<<ptr->get()<<",";
	ptr = ptr-1;
	cout<<ptr->get()<<endl;
	delete []ptr;
	return 0;
}
