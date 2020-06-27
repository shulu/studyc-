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
	cout<<"请输入要保存的字符数:"<<endl;
	cin>>n;
	if(n<1)
	{
		cout<<"请输入大于0的整数:"<<endl;	
	}
	A = new string [n];
	int i;
	for(i=0;i<n;i++)
	{
		string tmp;
		cout<<"请输入要保存的字符";
		cout<<i+1<<endl;
		cin>>tmp;
		A[i] = tmp;
		cout<<"当前输入保存的字符为: "<<A[i]<<endl;
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
		cout<<"当前输入的字符串长度为："<<nowLength<<endl;
		totalLength += nowLength; 
		cout<<"当前字符串数组字符串总长度为："<<totalLength<<endl;
		if(i==n-1)
		{
			cout<<"全部字符已经输入完成"<<endl;
			break;
		}
	}
	avgLength = (float)totalLength/n;
	cout<<"当前输入的最大长度字符串为:"<<maxStr<<" 长度为："<<maxLength<<endl;
	cout<<"当前输入的最小长度字符串为:"<<minStr<<" 长度为："<<minLength<<endl;
	cout<<"当前输入的字符串平均长度为:"<<avgLength<<endl;
	return 0;
} 
