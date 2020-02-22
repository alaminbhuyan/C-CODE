#include<iostream>
#include<conio.h>
using namespace std;
void display(int &x)
{
    x=x*x;
}
int main()
{
    int a=10;
    cout<<"Before calling the function the value of a: "<<a<<endl;
    display(a);
    cout<<"Before calling the function the value of a: "<<a<<endl;
    getch();
}
