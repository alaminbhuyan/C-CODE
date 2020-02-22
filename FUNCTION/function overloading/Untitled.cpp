#include<iostream>
#include<conio.h>
using namespace std;
void display(int x,int y)
{
    cout<< x+y;
}
void display(double x,double y)
{
    cout<< x+y;
}
void display(int x,double y)
{
    cout<< x+y;
}
void display(double x,int y)
{
    cout<< x+y;
}
int main()
{
    int a;
    double b;
    cin>>a;
    cin>>b;
   display(a,b);
}
