#include<iostream>
#include<string>
using namespace std;
class Sset
{
	private:
		string s;
	public:
		Sset();
		Sset(string ss)
		{
			s = ss;
		}
		//���� 
		Sset operator+(Sset & s1);
		//� 
		Sset operator-(Sset & s1);
		//���� 
		Sset operator*(Sset & s1);
		//���Ӽ� 
		Sset operator<(Sset & s1);
		//�����Ƿ���� 
		Sset operator==(Sset & s1);
		//�����Ƿ���� 
		Sset operator!=(Sset & s1);
		void printS()
		{
			cout<<"����Ԫ�أ�"<<s<<" ���ϳ��ȣ�"<<s.length()<<endl;
		}
};
Sset Sset::operator+(Sset & s1)
{
	string tmpS;
	string tmpS1;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"����1Ԫ��Ϊ:"<<tmpS<<endl;
	cout<<"����2Ԫ��Ϊ:"<<tmpS1<<endl;
	for(int i=0;i<tmpS1.length();i++)
	{
		if(tmpS.find(tmpS1[i]) == tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS.push_back(tmpS1[i]);
		}
	}
	cout<<"����:"<<endl;
	return Sset(tmpS);
}
Sset Sset::operator-(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"����1Ԫ��Ϊ:"<<tmpS<<endl;
	cout<<"����2Ԫ��Ϊ:"<<tmpS1<<endl;
	for(int i=0;i<tmpS.length();i++)
	{
		if(tmpS1.find(tmpS[i]) != tmpS.npos)
		{
			cout<<tmpS[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS.erase(i);
		}
	}
	cout<<"�:"<<endl;
	return Sset(tmpS);
}
Sset Sset::operator*(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"����1Ԫ��Ϊ:"<<tmpS<<endl;
	cout<<"����2Ԫ��Ϊ:"<<tmpS1<<endl;
	for(int i=0;i<tmpS1.length();i++)
	{
		if(tmpS.find(tmpS1[i]) != tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS2.push_back(tmpS1[i]);
		}
	}
	cout<<"����:"<<endl;
	return Sset(tmpS2);
}
Sset Sset::operator<(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"����1Ԫ��Ϊ:"<<tmpS<<endl;
	cout<<"����2Ԫ��Ϊ:"<<tmpS1<<endl;
	for(int i=0;i<tmpS.length();i++)
	{
		if(tmpS1.find(tmpS[i]) == tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS2.push_back(tmpS1[i]);
		}
	}
	cout<<"���Ӽ�:"<<endl;
	if(tmpS2.length()>0)
	{
		cout<<"�����Ӽ�:"<<endl;
	}else{
		cout<<"���Ӽ�:"<<endl;
	} 
	return Sset(tmpS2);
}
Sset Sset::operator==(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"����1Ԫ��Ϊ:"<<tmpS<<endl;
	cout<<"����2Ԫ��Ϊ:"<<tmpS1<<endl;
	cout<<"�����Ƿ����:"<<endl;
	if(tmpS.length() != tmpS2.length())
	{
		cout<<"���ϲ����"<<endl; 
	}else{
		bool isEqual = true;
		for(int i=0;i<tmpS.length();i++)
		{
			if(tmpS1[i] != tmpS[i])
			{
				isEqual = false;
			}
		}
		if(isEqual)
		{
			cout<<"�������"<<endl;
		}else{
			cout<<"���ϲ����"<<endl;
		}
	}
	return Sset(tmpS2);
}
Sset Sset::operator!=(Sset & s1)
{
	return Sset(s1.s);
}
int main()
{
	Sset s1("123456"),s2("4567");
	cout<<"this is Set"<<endl;
	s1.printS();
	Sset s3 = s1+s2;
	s3.printS();
	s3 = s1-s2;
	s3.printS();
	s3 = s1*s2;
	s3.printS(); 
	s1<s2;
	s1==s2;
}
