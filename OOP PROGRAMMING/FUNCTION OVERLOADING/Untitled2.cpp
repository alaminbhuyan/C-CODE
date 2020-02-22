#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//addition
void displaysum(int x, int y)
{
    cout<<x+y<<endl;
}
void displaysum(double x, double y)
{
    cout<<x+y<<endl;
}
void displaysum(int x, double y)
{
    cout<<x+y<<endl;
}
void displaysum(double x, int y)
{
    cout<<x+y<<endl;
}

//subtraction
void displaysub(int x,int y)
{
    cout<<x-y<<endl;
}
void displaysub(double x, double y)
{
    cout<<x-y<<endl;
}
void displaysub(int x, double y)
{
    cout<<x-y<<endl;
}
void displaysub(double x, int y)
{
    cout<<x-y<<endl;
}
//multiplication
void displaymul(int x, int y)
{
    cout<<x*y<<endl;
}
void displaymul(double x, double y)
{
    cout<<x*y<<endl;
}
void displaymul(int x, double y)
{
    cout<<x*y<<endl;
}
void displaymul(double x, int y)
{
    cout<<x*y<<endl;
}
//devition
void displaydiv(int x, int y)
{
    cout<<x/y<<endl;
}
void displaydiv(double x, double y)
{
    cout<<x/y<<endl;
}
void displaydiv(int x, double y)
{
    cout<<x/y<<endl;
}
void displaydiv(double x, int y)
{
    cout<<x/y<<endl;
}
int main()
{
    //displaysum(10,5);
    //displaysub();
    displaymul(5.5,5);
   // displaydiv();
    getch();
}
