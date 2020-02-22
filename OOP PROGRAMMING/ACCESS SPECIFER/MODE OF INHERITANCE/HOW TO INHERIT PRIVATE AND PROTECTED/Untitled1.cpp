#include<iostream>
#include<string>
using namespace std;
class A
{
private:
    string name="alamin";

    int id = 1030;

    float gpa = 3.58;
public:
    //int c = 30;
    void display()
    {
        cout<<name<<endl<<id<<endl<<gpa<<endl;
        //cout<<c<<endl;
    }
};
class B : public A
{
public:
    float height = 5.8;
    void display2()
    {
        display();
       cout<<height<<endl;
    }
};
int main()
{
    B obj;
    obj.display2();
}
