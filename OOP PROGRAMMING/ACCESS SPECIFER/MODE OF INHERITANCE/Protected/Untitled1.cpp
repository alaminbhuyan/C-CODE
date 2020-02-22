//program how to access when mode private.........
/*if we use protected mode when we inherit a class then of parents class  all members are become protected mode for child class
So if we want access these properties at first we have to create a public method for access all protected properties and we can't not access
these protected properties in the main function to create a object of child class
  */
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
class B : protected A // here we use public mode
{
    /*
    Mode: protected.............
    string name;
    int id;
    float mark;
    void display()
    {
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Mark: "<<mark;
    }
    */
public:
    void set()
    {
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"Enter your id: ";
        cin>>id;
        cout<<"Enter your mark: ";
        cin>>mark;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Mark: "<<mark;
    }
};
int main()
{
    B obj;
    obj.set();
    cout<<endl;
    obj.display();
    /*obj.name ="alamin";
    obj.id = 1030;
    obj.mark=3.50;*/
    return 0;
}

