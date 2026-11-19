#include<iostream>
using namespace std;

class Person
{
	public:

	string name;
	int age;

	void accept()
	{
		cout<<"Enter Name : ";
		cin>>name;

		cout<<"Enter  age : ";
		cin>>age;
	}

	void display()
	{
		cout<<"The Name Is : "<<name<<endl;
		cout<<"The Age Is : "<<age<<endl;
	}
};


class Student: public Person
{
	public:

	int roll_no;
	int marks;

	void getdata()
	{
		cout<<"Enter Roll No : ";
		cin>>roll_no;

		cout<<"Enter Marks : ";
		cin>>marks;
	}

	void display1()
	{
		cout<<"The Roll No Is :"<<roll_no<<endl;
		cout<<"The Marks Are :"<<marks<<endl;
	}
};

int main()
{
	Student s;
	s.accept();
	s.display();
	s.getdata();
	s.display1();

	return 0;
}
