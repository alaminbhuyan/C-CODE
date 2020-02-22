#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    int id;
    float mark;
public:

    void get();
};
void Student :: get()
{
    cout<<"Enter student name: ";
    getline(cin,name);
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter mark: ";
    cin>>mark;
    cout<<"Student Name: "<<name<<endl<<"Id: "<<id<<endl<<"Mark: "<<mark;
}
int main()
{
   Student obj;
   obj.get();
   return 0;
}

