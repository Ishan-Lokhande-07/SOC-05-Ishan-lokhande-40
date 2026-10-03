#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    string name;
    int empid;
    float basicsal;
    float bonus;
    float totalsal;

    public:
    Employee()
    {
        name="unknown";
        empid=0;
        basicsal=0;
        bonus=0;
        totalsal=0;
    }

    Employee(string n, int id, float s, float b)
    {
        name=n;
        empid=id;
        basicsal=s;
        bonus=b;
    }

    void calculate()
    {
        totalsal=basicsal+bonus;
    }

    void display()
    {
        cout<<"Employee Name Is : "<<name<<endl;
        cout<<"Employee Id Is : "<<empid<<endl;
        cout<<"Employee Salary Is : "<<basicsal<<endl;
        cout<<"Employee Bonus Is : "<<bonus<<endl;
        cout<<"Employee Total Salary Is : "<<totalsal<<endl;
    }
};

int main()
{
    Employee e("Ishan",600,200000,10000);
    e.calculate();
    e.display();

    return 0;
}