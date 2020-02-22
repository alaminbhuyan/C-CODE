#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class person
{
public:
    void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class student : public person
{
    public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};
class teacher : public person
{
    public:
    void display()
     {
        cout<<"I am a teacher"<<endl;
    }

};
int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();

    getch();
}
