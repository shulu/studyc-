#include<iostream>
using namespace std;
class PrintTen
{
	int ten[10];
	public:
		static int num;
		void insertInt(int index, int val)
		{
			index = 10-1-index;
			ten[index] = val;
			num++;
		} 
		void printNum() 
		{
			cout<<"当前输入整数个数"<<num<<endl;
		}
		void printTenReverse()
		{
			for(int i=0;i<10;i++)
			{
				cout<<i<<":"<<ten[i]<<endl;
			}
		}
};
int PrintTen::num = 0;
int main()
{
	PrintTen pt;
	int tmpInt;
	pt.printNum();
	cout<<"请输入10个整数"<<endl;
	for(int i=0;i<10;i++)
	{
		int index = i+1;
		cout<<"请输入第"<<index<<"个数据:";
		cin>>tmpInt;
		pt.insertInt(i, tmpInt);
		pt.printNum();
	}
	pt.printTenReverse();
}
