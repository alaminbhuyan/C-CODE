#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=20,b=10;
    int *p1,*p2;

    p1=&a;
    p2=&b;

    cout<<"Before swap: *p="<<*p1<<" "<<"*p2="<<*p2<<endl;

    *p1 = *p1 + *p2;//*p1=20+10=30
    *p2 = *p1 - *p2;//*p2=30-10=20
    *p1 = *p1 - *p2;//*p1=30-20=10

    cout<<"After swap: *p="<<*p1<<" "<<"*p2="<<*p2<<endl;
}
