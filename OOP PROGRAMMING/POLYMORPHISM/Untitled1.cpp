#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class person
{
public:
    virtual void display()
    {
        cout<<" I am a person"<<endl;
    }
};
class student : public person
{
public:
    void display()
    {
        cout<<" I am a student"<<endl;
    }
};
class teacher : public person
{
public:
    void display()
    {
        cout<<" I am a teacher"<<endl;
    }

};
int main()
{
    person obj,*p;
    student s;
    teacher t;
    p=&obj;
    p->display();
    p = &s;
    p->display();

    p = &t;
    p->display();
    getch();
}

