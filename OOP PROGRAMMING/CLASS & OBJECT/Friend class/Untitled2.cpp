//program to understand how to use friend class ...........................
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class A
{
private:
    string name="Alamin bhuyan";
    int rollno=1030;
public:
    friend class B;
};
class B
{
public:
    void display(A obj)
    {
        cout<<"Name: "<<obj.name<<endl;
        cout<<"Rollno: "<<obj.rollno<<endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1);
    getch();
}
