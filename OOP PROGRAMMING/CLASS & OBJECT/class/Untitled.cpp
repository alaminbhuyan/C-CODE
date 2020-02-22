//program to understand to create a class and object and how access them...............
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
public:

    string name ;
    int rollno;
    float gpa;
};
int main()
{
    student stu1,stu2;
    stu1.name= "Alamin bhuyan";
    stu1.rollno= 1030;
    stu1.gpa=4.50;

     stu2.name= "Tania akter";
    stu2.rollno= 1031;
    stu2.gpa=4.50;
    cout<<"Name:"<<stu1.name<<endl<<"Rollno:"<<stu1.rollno<<endl<<"Gpa:"<<stu1.gpa<<endl;
    cout<<"Name:"<<stu2.name<<endl<<"Rollno:"<<stu2.rollno<<endl<<"Gpa:"<<stu2.gpa<<endl;
    getch();

}
