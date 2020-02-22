#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
       this-> id = id;
       this-> name = name;
      this->  salary = salary;
    }
    void display()
    {
        cout<<" ID: "<<id<<endl<<" Name: "<<name<<endl<<" Salary: "<<salary<<endl;
        cout<<endl;
    }
};
int main()
{
    Employee emp1(101,"Alamin Bhuyan",25000);
    Employee emp2(102,"Tania akter",25000);
    Employee emp3(103,"Fatema akter",25000);

    emp1.display();
    emp2.display();
    emp3.display();
    getch();
}
