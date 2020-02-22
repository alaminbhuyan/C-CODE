#include<iostream>
#include<conio.h>
using namespace std;
void func()
{
     int a=5;
     static int b=5;
    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    a++;
    b++;
    cout<<endl;
}
int main()
{
    for(int i=1;i<=4;i++)
    {
        func();
    }
    getch();
}
