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
		//并集 
		Sset operator+(Sset & s1);
		//差集 
		Sset operator-(Sset & s1);
		//交集 
		Sset operator*(Sset & s1);
		//真子集 
		Sset operator<(Sset & s1);
		//集合是否相等 
		Sset operator==(Sset & s1);
		//集合是否不相等 
		Sset operator!=(Sset & s1);
		void printS()
		{
			cout<<"集合元素："<<s<<" 集合长度："<<s.length()<<endl;
		}
};
Sset Sset::operator+(Sset & s1)
{
	string tmpS;
	string tmpS1;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"集合1元素为:"<<tmpS<<endl;
	cout<<"集合2元素为:"<<tmpS1<<endl;
	for(int i=0;i<tmpS1.length();i++)
	{
		if(tmpS.find(tmpS1[i]) == tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS.push_back(tmpS1[i]);
		}
	}
	cout<<"并集:"<<endl;
	return Sset(tmpS);
}
Sset Sset::operator-(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"集合1元素为:"<<tmpS<<endl;
	cout<<"集合2元素为:"<<tmpS1<<endl;
	for(int i=0;i<tmpS.length();i++)
	{
		if(tmpS1.find(tmpS[i]) != tmpS.npos)
		{
			cout<<tmpS[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS.erase(i);
		}
	}
	cout<<"差集:"<<endl;
	return Sset(tmpS);
}
Sset Sset::operator*(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"集合1元素为:"<<tmpS<<endl;
	cout<<"集合2元素为:"<<tmpS1<<endl;
	for(int i=0;i<tmpS1.length();i++)
	{
		if(tmpS.find(tmpS1[i]) != tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS2.push_back(tmpS1[i]);
		}
	}
	cout<<"交集:"<<endl;
	return Sset(tmpS2);
}
Sset Sset::operator<(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"集合1元素为:"<<tmpS<<endl;
	cout<<"集合2元素为:"<<tmpS1<<endl;
	for(int i=0;i<tmpS.length();i++)
	{
		if(tmpS1.find(tmpS[i]) == tmpS.npos)
		{
			cout<<tmpS1[i]<<endl;
			//tmpS.append(tmpS1[i]);
			tmpS2.push_back(tmpS1[i]);
		}
	}
	cout<<"真子集:"<<endl;
	if(tmpS2.length()>0)
	{
		cout<<"不是子集:"<<endl;
	}else{
		cout<<"是子集:"<<endl;
	} 
	return Sset(tmpS2);
}
Sset Sset::operator==(Sset & s1)
{
	string tmpS, tmpS1, tmpS2;
	tmpS  = this->s;
	tmpS1 = s1.s;
	cout<<"集合1元素为:"<<tmpS<<endl;
	cout<<"集合2元素为:"<<tmpS1<<endl;
	cout<<"集合是否相等:"<<endl;
	if(tmpS.length() != tmpS2.length())
	{
		cout<<"集合不相等"<<endl; 
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
			cout<<"集合相等"<<endl;
		}else{
			cout<<"集合不相等"<<endl;
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
