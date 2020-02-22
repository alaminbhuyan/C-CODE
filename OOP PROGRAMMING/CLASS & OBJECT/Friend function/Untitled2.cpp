//program to understand friend function.....................
#include<iostream>
#include<conio.h>
using namespace std;
class B;//forward class declaration.............
class A
{
private:
    int x;
public:
    void setdata(int i)
    {
        x=i;
    }
    friend void frd_func(A,B); // friend function declaration
};
class B
{
private:
    int y;
public:
    void setdata(int i)
    {
        y=i;
    }
    friend void frd_func(A,B); // friend function declaration
};
void frd_func(A obj1,B obj2)  //friend function definition.................
{
    if(obj1.x>obj2.y)
        cout<<"X is big: "<<obj1.x<<endl;
    else
        cout<<"Y is big: "<<obj2.y<<endl;
}
int main()
{
    A ob1;
    B ob2;
    ob1.setdata(20);
    ob2.setdata(10);
    frd_func(ob1,ob2);
    getch();
}
