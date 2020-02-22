#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    float gpa;
    void getinput();
    void display();
   /* void getinput()
    {
        cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your rollno:";
    cin>>rollno;
    cout<<"Enter your gpa: ";           //inside function definition
    cin>>gpa;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl<<"Rollno:"<<rollno<<endl<<"GPA:"<<gpa<<endl;
    }*/
};

void student::getinput()
{
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your rollno:";
    cin>>rollno;
    cout<<"Enter your gpa: ";     //outside function definition
    cin>>gpa;
}
void student::display()
{
    cout<<"Name:"<<name<<endl<<"Rollno:"<<rollno<<endl<<"GPA:"<<gpa<<endl;
}
int main()
{
    student a,b;
    a.getinput();
    b.getinput();
    a.display();
    b.display();

    getch();
}
