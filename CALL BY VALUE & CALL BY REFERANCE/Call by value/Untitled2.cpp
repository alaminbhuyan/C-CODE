#include<iostream>
#include<conio.h>
using namespace std;
void squre(int x)
{
    cout<<" In the function the value of a: "<<x*x<<endl;
}
int main()
{
    int a=10;
    cout<<" Before calling the function a is : "<<a<<endl;
    squre(a);
    cout<<" After calling the function a is : "<<a<<endl;

    getch();
}
