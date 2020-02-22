//program how to access a privet class to getter and setter method...........................
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
private:
    int salary;
public:
    void setsalary(int x)
    {
        salary=x;
    }
    int getsalary()
    {
        return salary;

    }
};
int main()
{
    employee emp;
    emp.setsalary(50000);
    cout<<emp.getsalary();
    getch();
}
