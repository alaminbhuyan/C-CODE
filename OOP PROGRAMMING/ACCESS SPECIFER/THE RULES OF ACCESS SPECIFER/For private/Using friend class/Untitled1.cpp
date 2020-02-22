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
    friend class Stu;
};
class Stu
{
public:
    void display(Student obj)
    {
        cout<<"Enter your name: ";
        getline(cin,obj.name);
        cout<<"Enter your id: ";
        cin>>obj.id;
        cout<<"Enter your mark: ";
        cin>>obj.mark;
        cout<<"Name: "<<obj.name<<endl<<"ID: "<<obj.id<<endl<<"Mark: "<<obj.mark;
    }
};
int main()
{
    Student obj;
    Stu obj2;
    obj2.display(obj);
    return 0;
}

