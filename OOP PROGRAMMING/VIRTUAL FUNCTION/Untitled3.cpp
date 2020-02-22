#include<iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout<<"Hi, I am the function of class A"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<"Hi, I am the function of class B"<<endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout<<"Hi, I am the function of class C"<<endl;
    }
};
void show_fun(A *a)
{
    a->display();
}
int main()
{
    A obj;
    B obj2;
    C obj3;
    show_fun(&obj);
    show_fun(&obj2);
    show_fun(&obj3);
}

