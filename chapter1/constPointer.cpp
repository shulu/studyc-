#include<iostream>
using namespace std;
int main()
{
	int a1 = 3; //��ͨ���� a1 = 5����ȷ�ĵ� �ǿ����޸�ֵ�� 
	const int a2 = a1; //����a2 a2 = 3 �����ǲ����޸ĵ�
	int * a3 = &a1; //��ָͨ�� a3 a3 = 3 *a3 = 4����ȷ��
	const int * a4  = &a1; //��ָ�� a4 = 3 const���ε������� �����ǲ���ͨ��ָ���޸ĵ� *a4 = 5�Ǵ���� 
	int * const a5 = &a1; //const���ε���ָ�� ָ���ǲ����޸ĵ� ���ǿ����޸�ָ��ָ������� * a5 = 6����ȷ��
	int const * const a6 = &a1; //�����ǳ�����ָ��Ҳ�ǳ�����
	const int * const a7 = &a1; //�����ǳ�����ָ��Ҳ�ǳ�����
	return 0; 
}
