//program to understand the single inheritance......................
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class father //BASE CLASS
{
public:             //ACCESS SPECIFIRE

    string name;
     float height;

    int age;
    void display()// METHOD
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Height: "<<height<<endl;

    }

};
class son : public father //CHILD CLASS INHERIT THE BASE CLASS
{
    //string name;
    //int age;
    //void display()
public:


    void display2()// CHILD METHOD
    {

        display();

    }
};
int main()
{
    son m1;
    m1.name="Mostafa kamal";
    m1.age=45;
    m1.height=5.6;
    son m2;
    m2.name="alamin bhuyan";
    m2.age=21;
    m2.height=5.7;
    m1.display2();
    m2.display2();
    getch();
}
