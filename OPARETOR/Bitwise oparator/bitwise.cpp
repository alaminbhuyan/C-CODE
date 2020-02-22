#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a = 32;
    int b = 12;
    int c;

    c =a & b;  // it works with binary multiplication
    cout<<"The value : "<<c<<endl;
     c =a | b; // it works with binary sum
    cout<<"The value : "<<c<<endl;
    c =a ^ b;
    cout<<"The value : "<<c<<endl;
    getch();
}
