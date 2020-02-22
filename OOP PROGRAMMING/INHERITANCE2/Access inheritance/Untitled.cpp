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
    void getsalary()
    {

        cout<<" Salary: "<<salary<<endl;
    }
};
int main()
{
    progrmmer myobject;
    myobject.setsalary(50000);
    myobject.getsalary();
    myobject.bonus=15000;

    cout<<" Bonus:"<<myobject.bonus;
    getch();
}
