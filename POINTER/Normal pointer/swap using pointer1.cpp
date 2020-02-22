#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=20,*p1=&a;
    int b=10,*p2=&b;
    int temp;
    int *temp1;
   cout<<"Before swap: *p1="<<*p1<<" "<<"*p2="<<*p2<<endl;
      //swapping keep value or pointer variable of each variable......................
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After swap: *p1="<<*p1<<" "<<"*p2="<<*p2<<endl;


    cout<<"\n\n\n\n\n";

     cout<<"Before swap: *p1="<<*p1<<" "<<"*p2="<<*p2<<endl;
     //swapping keep address of each variable......................
     temp1=p1;
     p1=p2;
     p2=temp1;

      cout<<"After swap: *p1="<<*p1<<" "<<"*p2="<<*p2<<endl;

}
