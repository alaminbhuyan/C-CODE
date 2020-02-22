#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<" Name: "<<name<<endl<<" Age: "<<age<<endl;
    }
};
class student : public person
{
    //string name;
    //int age;
    //void display1();
public:

    int id;
    void display2()
    {
        cout<<" ID: "<<id<<endl;
        display1();
        cout<<endl;
    }

};
int main()
{
    student s1;
    s1.id= 101;
    s1.name="Alamin bhuyan";
    s1.age=21;
    s1.display2();
    student s2;
    s2.id= 102;
    s2.name="Farhan bhuyan";
    s2.age=21;
    s2.display2();
    getch();
}
