#include<iostream>
using namespace std;

class Vehicle
{
	public:

	string name;
	string car_type;

	void accept()
	{
		cout<<"Enter Car Name :";
		cin>>name;
		cout<<"Enter Car Type :";
		cin>>car_type;
	}

	void display()
	{
		cout<<"THE Car Name Is : "<<name<<endl;
		cout<<"THe car Type Is : "<<car_type;
	}
};

class Car: public Vehicle
{
	public:

	int car_id;

	void getdata()
	{
		cout<<"Enter Car Id : ";
		cin>>car_id;
	}

	void display1()
	{
		cout<<"The Car ID Is : "<<car_id<<endl;
	}
};

class Electrical_car: public Vehicle
{
	public:

	string car_brand;

	void getdata1()
	{
		cout<<"Enter Car Brand Name :";
		cin>>car_brand;
	}

	void display2()
	{
		cout<<"The Car Brand Is :"<<car_brand<<endl;
	}

};

int main()
{
	Car c;

	c.accept();
	c.display();

	c.getdata();
	c.display1();

	Electrical_car e;

	e.getdata1();
	e.display2();

	return 0;
}
