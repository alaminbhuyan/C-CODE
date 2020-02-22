#include<iostream>
using namespace std;
class A
{
public:
    void dis()
    {
        cout<<"This is class A"<<endl;
    }
    virtual void display()
    {
        cout<<"Hi, I am the function of class A"<<endl;
    }
};
class B : public A
{
public:
    void dis()
    {
        cout<<"This is class B"<<endl;
    }
    void display()
    {
        cout<<"Hi, I am the function of class B"<<endl;
    }
};
class C : public B
{
public:
    void dis()
    {
        cout<<"This is class C"<<endl;
    }
    void display()
    {
        cout<<"Hi, I am the function of class C"<<endl;
    }
};

int main()
{
    A *obj;
    B obj2;
    C obj3;
    obj=&obj2;
    obj->dis();
    obj->display();

     obj=&obj3;
    obj->dis();
    obj->display();
}


