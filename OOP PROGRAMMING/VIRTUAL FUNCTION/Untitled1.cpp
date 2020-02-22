#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    int x=5;
    virtual void display()
    {
        cout<<"The value of x is: "<<x<<endl;
    }
};
class B : public A
{
public:
    int y=10;
    void display()
    {
        cout<<"The value of y is: "<<y;
    }
};
int main()
{
    A *a;

    B b;

    a = &b;
    a->display();
    getch();
}
