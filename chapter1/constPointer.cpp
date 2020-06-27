#include<iostream>
using namespace std;
int main()
{
	int a1 = 3; //普通变量 a1 = 5是正确的的 是可以修改值的 
	const int a2 = a1; //常量a2 a2 = 3 常量是不可修改的
	int * a3 = &a1; //普通指针 a3 a3 = 3 *a3 = 4是正确的
	const int * a4  = &a1; //常指针 a4 = 3 const修饰的是数据 数据是不能通过指针修改的 *a4 = 5是错误的 
	int * const a5 = &a1; //const修饰的是指针 指针是不能修改的 但是可以修改指针指向的数据 * a5 = 6是正确的
	int const * const a6 = &a1; //数据是常量的指针也是常量的
	const int * const a7 = &a1; //数据是常量的指针也是常量的
	return 0; 
}
