//program to understand how to calculate of triangle area.....................
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double base,height,area;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the height : ";
    cin>>height;
    //area =(float) 1/2*base*height;
    //area = 1.0/2*base*height;
    area = 0.5*base*height;

    cout<<"The area of triangle is : "<<area;
    getch();
}
