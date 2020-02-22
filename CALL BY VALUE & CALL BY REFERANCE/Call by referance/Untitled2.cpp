#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=100,y=200;
    cout<<"After calling function a is: "<<x<<endl;
    cout<<"After calling function b is: "<<y<<endl<<endl;
    swap(&x,&y);
    cout<<"Before calling function a is: "<<x<<endl;
    cout<<"Before calling function b is: "<<y<<endl;
    getch();
}
