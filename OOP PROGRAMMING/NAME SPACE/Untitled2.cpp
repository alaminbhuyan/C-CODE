#include<iostream>
#include<conio.h>
using namespace std;
namespace First
{
    void sayHello()
    {
        cout<<"Hello, First Name.........."<<endl;
    }
}
namespace Second
{
    void sayHello()
    {
        cout<<"Hello, Second Name.........."<<endl;
    }
}
using namespace First;
//using namespace Second;
int main()
{
    sayHello();
    getch();
}
