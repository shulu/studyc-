#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int n;
	int totalLength = 0;
	float avgLength = 0;
	int maxLength = 0;
	string maxStr;
	int minLength = 0;
	string minStr;
	int nowLength = 0;
	string * A;
	cout<<"������Ҫ������ַ���:"<<endl;
	cin>>n;
	if(n<1)
	{
		cout<<"���������0������:"<<endl;	
	}
	A = new string [n];
	int i;
	for(i=0;i<n;i++)
	{
		string tmp;
		cout<<"������Ҫ������ַ�";
		cout<<i+1<<endl;
		cin>>tmp;
		A[i] = tmp;
		cout<<"��ǰ���뱣����ַ�Ϊ: "<<A[i]<<endl;
		nowLength = tmp.size();
		if(i==0)
		{
			maxLength = nowLength;
			maxStr = tmp;
			minLength = nowLength;
			minStr = tmp;
		}else{
			if(nowLength >= maxLength)
			{
				maxLength = nowLength;
				maxStr = tmp;
			}
			if(nowLength < minLength)
			{
				minLength = nowLength;
				minStr = tmp;
			}
		}
		cout<<"��ǰ������ַ�������Ϊ��"<<nowLength<<endl;
		totalLength += nowLength; 
		cout<<"��ǰ�ַ��������ַ����ܳ���Ϊ��"<<totalLength<<endl;
		if(i==n-1)
		{
			cout<<"ȫ���ַ��Ѿ��������"<<endl;
			break;
		}
	}
	avgLength = (float)totalLength/n;
	cout<<"��ǰ�������󳤶��ַ���Ϊ:"<<maxStr<<" ����Ϊ��"<<maxLength<<endl;
	cout<<"��ǰ�������С�����ַ���Ϊ:"<<minStr<<" ����Ϊ��"<<minLength<<endl;
	cout<<"��ǰ������ַ���ƽ������Ϊ:"<<avgLength<<endl;
	return 0;
} 
