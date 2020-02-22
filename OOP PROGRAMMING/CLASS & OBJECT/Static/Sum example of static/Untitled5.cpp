#include<iostream>
#include<string>
using namespace  std;
class student
{
public:
    static int a;
    int b;
    student()
    {
        b=0;
    }
    void display()
    {
        cout<<"a is: "<<++a<<endl;
        cout<<"b is: "<<++b<<endl;
    }
};
int student :: a;
int main()
{
    cout<<student::a<<endl;
    student obj;
    obj.display();
    student obj1;
    obj1.display();
    student obj2;
    student obj3;
    obj.display();

}
