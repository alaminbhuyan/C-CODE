#include<iostream>
#include<conio.h>
using namespace std;
class account
{
public:
    float salary=60000;
};
class progrmmer : public account
{
public:
    float bonus=5000;
};
int main()
{
    progrmmer obj;
    cout<<"Salary: "<<obj.salary<<endl<<"Bonus: "<<obj.bonus;
    getch();
}
