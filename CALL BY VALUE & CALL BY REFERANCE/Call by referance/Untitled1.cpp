#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=100;
    int y=200;
    cout<<"Before calling the function the value of x: "<<x<<endl;
    cout<<"Before calling the function the value of y: "<<y<<endl;
    swap(x,y);
    cout<<endl;
    cout<<"After calling the function the value of x: "<<x<<endl;
    cout<<"After calling the function the value of y: "<<y<<endl;
    getch();
}
