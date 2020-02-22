#include<iostream>
#include<string>
using namespace std;
class A
{
private:
    string name;
    int age;
    float height;
public:
    friend void display(A);
};
void display(A obj)
{
    cout<<"Enter your name: ";
    getline(cin,obj.name);
    cout<<"Enter your age: ";
    cin>>obj.age;
    cout<<"Enter your height: ";
    cin>>obj.height;

    cout<<"Name: "<<obj.name<<endl<<"Age: "<<obj.age<<endl<<"Height: "<<obj.height;
}
int main()
{
    A obj;
    display(obj);
}
