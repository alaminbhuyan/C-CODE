#include<iostream>
using namespace std;
class A
{
public:
     void display()
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
        //A::display();
    }
};
class C : public B
{
public:
    void display()
    {
        cout<<"Hi, I am the function of class C"<<endl;
        //B::display();
    }
};

int main()
{
    C obj;
    obj.A::display();
    obj.B::display();
    obj.display();
}

