#include<iostream>
#include "myDate.cpp"
//using namespace std;
class Student
{
	public:
		void setStudent(string, myDate); //����ѧ����Ϣ 
		void setName(string); //��������
		string getName() ; //��ȡ����
		void setBirthday(myDate); //��������
		myDate getBirthday(); //��ȡ����
		void printStudent()  const; //��ӡ��Ϣ
	private:
		string name; //����
		myDate birthday; //���� 
};
//�������ⶨ���ԭ����
void Student::setStudent(string s, myDate d)
{
	name = s;
	birthday.setDate(d);
	return;
}
void Student::setName(string n)
{
	name = n;
	return;
}
string Student::getName()
{
	return name;
}
void Student::setBirthday(myDate d)
{
	birthday.setDate(d);
}
myDate Student::getBirthday()
{
	return birthday;
}
void Student::printStudent() const
{
	cout<<"������"<<name<<"\t ���գ�";
	birthday.printDate(); //������myDate �ĳ�Ա����
	cout<<endl; 
}