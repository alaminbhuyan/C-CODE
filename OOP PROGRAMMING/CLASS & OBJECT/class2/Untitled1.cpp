//program  a object oriented class define and access them...................
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class student
{
    char name[30];
    int rollno;
public:
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"Enter name:";
    //cin>>name;
    gets(name);

    cout<<"Enter rollno:";
    cin>>rollno;
    fflush(stdin);

}
void student::display()
{
    cout<<endl<<name;

    cout<<endl<<rollno;
    cout<<"\n";
    //fflush(stdout);
}
int main()
{
    student a;
    a.getdata();
    student b;
    b.getdata();
    a.display();
    b.display();
}
