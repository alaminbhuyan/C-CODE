//This program is done by using void function that's mean no return value..........................
#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    void getdata1()
    {
        cout<<" Enter your name: ";
        cin>>name;
        cout<<" Enter your age: ";
        cin>>age;
    }
    void display1()
    {
        cout<<" Name: "<<name<<endl<<" Age: "<<age<<endl;
    }
};
class student : public person
{
    //string name;
    //int age;
    //void getdata1()
    //void display1();
public:

    int id;
    void getdata2()
    {
        cout<<" Enter your id: ";
        cin>>id;
        getdata1();
    }
    void display2()
    {
        cout<<" \n\n ID: "<<id<<endl;
        display1();
        cout<<endl;
    }

};
int main()
{
    student s1;
    s1.getdata2();
    s1.display2();
    getch();
}
