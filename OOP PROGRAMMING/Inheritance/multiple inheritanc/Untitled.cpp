//program to understand multiple inheritance...................
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//Base class
class Base_class1
{
public:
    void display()
    {
        cout<<"  \aI am Alamin bhuyan\n\n";
    }
};
//Another base class
class Base_class2
{
public:
    void display_data()
    {
        cout<<"  I am Tania akter\n";
    }
};
//Derived class(child class)
class Derived_class : public Base_class1, public Base_class2
{

};
int main()
{
    Derived_class my_object;
    my_object.display();
    my_object.display_data();
    getch();
}
