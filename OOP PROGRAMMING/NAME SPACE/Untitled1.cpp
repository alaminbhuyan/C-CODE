#include<iostream>
#include<conio.h>
using namespace std;
namespace First
{
    void sayHello()
    {
        cout<<"Hello, first Name..........."<<endl;
    }
}
namespace Second
{
    void sayHello()
    {
        cout<<"Hello, Second Name..........";
    }
}
int main()
{
    First :: sayHello();
    Second :: sayHello();
    getch();
}
