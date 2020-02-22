//program to understand how to inherit multiple class....................
#include<iostream>
#include<conio.h>
//base class
class A
{
protected:
    int a;
public:
    void set_a(int n)
    {
        a=n;
    }
};
//another base class
class B
{
protected:
    int b;
public:
    void set_b(int n)
    {
        b=n;
    }
};
//child or derived class
class C : public A,public B // here we can see one child class inherit two base class.......................
{
public:
    void display()
    {
        std::cout<<"The value of a is: "<<a<<std::endl;
        std::cout<<"The value of b is: "<<b<<std::endl;
        std::cout<<std::endl;
       std::cout<<"Addition of a and b is : "<<a+b;
    }
};
int main()
{
    C obj;
    obj.set_a(100);

    obj.set_b(200);

    obj.display();

    getch();

}
