#include<iostream>
#include<string>
using namespace std;
class Student
   {
	public:
	string name;
	int roll_no;
	float marks;

	void accept()
   {
	cout<<"Enter Name : ";
	cin>>name;
	//cin.ignore();
	//getline(cin,name);

	cout<<"Enter Rollno : ";
	cin>>roll_no;

	cout<<"Enter Marks : ";
	cin>>marks;
   }
	void Result()
   {
	if(marks>=40)
   {
	cout<<"Student is Pass";
   }
	else
   {
	cout<<"student is Fail";
   }
   }
	void display()
   {
	cout<<"Student Details"<<endl;

	cout<<"Student Name is:"<<name<<endl;

	cout<<"Student Roll No is : "<<roll_no<<endl;

	cout<<"Student Marks are: "<<marks<<endl;

	Result();
   }
   };


int main()
   {
	Student s;
	s.accept();
	s.display();
	return 0;
   }
