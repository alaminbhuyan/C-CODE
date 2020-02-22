#include<iostream>
#include<conio.h>
using namespace std;
class Animal
{
public:
    void display()
    {
        cout<<"Eating............."<<endl;
    }
};
class Dog : public Animal
{
public:
    void display()
    {
        cout<<"Eating bread..........";
    }
};
int main()
{
    Animal obj1;
    obj1.display();

    Dog obj=Dog();
    obj.display();
    getch();
}
