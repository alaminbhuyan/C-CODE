
//program to understand how to use function in a class.......................
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
    void display()
    {
        cout<<" Name:"<<name<<endl<<" Rollno:"<<rollno<<endl<<" GPA:"<<gpa<<endl;
    }
};
int main()
{
    student stu1,stu2;
    stu1.name="Alamin bhuyan";
    stu1.rollno=1030;
    stu1.gpa=4.50;
    stu2.name="Tania akter";
    stu2.rollno=1031;
    stu2.gpa=4.50;
    stu1.display();
    stu2.display();
}
