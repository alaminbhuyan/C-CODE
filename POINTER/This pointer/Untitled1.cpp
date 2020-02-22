#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:

    int id;
    string name;
    float salary;
    Employee(int id,string name,float salary)
    {
        this->id= id;
        this->name=name;
        this->salary=salary;
    }
    void display()
    {
        cout<<"ID: "<<id<<"  "<<"Name: "<<name<<"  "<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e1=Employee(1030,"Alamin bhuyan",25000);
    Employee e2=Employee(1031,"Tania akter",24000);
    Employee e3=Employee(1032,"Bonna akter",24000);
    e1.display();
    e2.display();
    e3.display();
}
