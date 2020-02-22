/*local variable holo jegolo main function ar betore assign kora hoy...local variable sodo je function a assign kora hove sodo oi function ar
betore kaj korbe...but static variable poro program jore kaj korbe */
#include<iostream>
#include<conio.h>
using namespace std;
 void display()
 {
     int a=10;// normal variable
     static int b=10;//static variable
     cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
     a++;
     b++;
     cout<<endl;
 }
int main()
{
    display();
    display();
    display();
    display();
    getch();
}
