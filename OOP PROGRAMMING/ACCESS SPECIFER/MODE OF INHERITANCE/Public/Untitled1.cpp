#include<iostream>
#include<string>
using namespace std;
class A
{
public:
    string name;
    int id;
    float mark;
    void display()
    {
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Mark: "<<mark;
    }
};
class B : public A // here we use public mode
{

};
int main()
{
    B obj;
    obj.name = "alamin";
    obj.id = 1030;
    obj.mark = 3.50;
    obj.display();
    return 0;
}
