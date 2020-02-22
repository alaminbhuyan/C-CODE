//This program is done by using return function that's mean it's  return value..........................
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
    getdata1(string x, int y)
    {
        name = x;
        age = y;
    }
     display1()
    {
         return string x,int y;
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
    int  getdata2(int z)
    {
        id = z;
        getdata1();
    }
     display2()
    {
        return display1(),int id;
    }

};
int main()
{
    student s1;
    string name;
    int age,id;
    cout<<" Enter your name: ";
    cin>>name;
    cout<<" Enter your age: ";
    cin>>age;
     cout<<" Enter your id: ";
    cin>>id;
    s1.getdata2(id);
    s1.getdata1(name,age);

    s1.display2()


    getch();
}

