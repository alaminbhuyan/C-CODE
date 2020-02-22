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
    void set(string, int , float);
    void get();
};
void Student :: set(string n,int i,float m)
{
    name = n;
    id = i;
    mark = m;
}
void Student :: get()
{
    cout<<"Student Name: "<<name<<endl<<"Id: "<<id<<endl<<"Mark: "<<mark;
}
int main()
{
   Student obj;
   obj.set("alamin",1030,3.80);
   obj.get();
   return 0;
}

