#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;
class university
{
public:
    string name;
    string dept_name;
    int rood_num;
    void take_data();
    void display();
};
void university :: take_data()
{
        cout<<"Enter your University name: ";
        getline(cin,name);

        cout<<"Enter your department name: ";
        getline(cin,dept_name);

        cout<<"Enter your rood number: ";
        cin>>rood_num;

}
void university :: display()
{
    cout<<"University Name: "<<name<<endl<<"Department Name: "<<dept_name<<endl<<"Rood number: "<<rood_num<<endl;
    //cout<<endl;
}

class student : public university
{
    //string name;
    // string dept_name;
    //int rood_num;
    //void display();
public:
    int id;
    float gpa;
    string stu_name;
    void take_data2();

    void display2();
};
void student :: take_data2()
{
        cout<<"Enter your id: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter your name: ";
        getline(cin,stu_name);

        cout<<"Enter your GPA: ";
        cin>>gpa;
        cin.ignore();
        take_data();
        //cin.ignore();
}
void student :: display2()
{
    cout<<"ID: "<<id<<endl<<"Name: "<<stu_name<<endl<<"GPA: "<<gpa<<endl;
    display();


}
int main()
{
    student s1;
    s1.take_data2();
    cout<<endl;
    s1.display2();
    getch();
}
