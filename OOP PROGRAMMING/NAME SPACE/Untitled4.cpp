#include<iostream>
#include<conio.h>
using namespace std;
namespace First
{
    int a;
}
namespace First
{
    int b;
}
int main()
{
    First :: a =5;
    First :: b= 5;
    cout<< First::a*First::b<<endl;
    using namespace First;
    a=6;
    cout<< a*b;
    getch();
}
