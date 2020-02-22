
//program to understand how to access inheritance value.................................
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//Base class
class employee
{
protected:                  // Protected access specifier
    int salary;
};
//derived class
class progrmmer : public employee
{
public:
    int bonus;
    void setsalary(int x)
    {
        salary = x;
    }
    int getsalary()
    {
        return salary;

    }
};
int main()
{
    progrmmer myobject;
    myobject.setsalary(50000);

    myobject.bonus=15000;
    cout<<"Salary: "<<myobject.getsalary()<<endl<<"Bonus:"<<myobject.bonus;
    getch();

}
