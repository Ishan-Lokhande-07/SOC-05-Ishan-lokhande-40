#include<iostream>
using namespace std;
class Rectangle
{
	private:
	float l,b;

	public:

	void getdata()
{
	cout<<"enter length";
	cin>>l;
	cout<<"enter breadth";
	cin>>b;
}

	float area();
	float perimeter();

	void display()
{
	cout<<"The area of rectangle is : "<<area()<<endl;
	cout<<"The perimeter of rectangle is : "<<perimeter()<<endl;
}
};

	float Rectangle::area()
{
	return l*b;
}

	float Rectangle::perimeter()
{
	return 2*(l+b);
}

int main()
{
	Rectangle r;
	r.getdata();
	r.display();
	return 0;
}
