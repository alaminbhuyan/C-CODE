#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
    double a,b;
    void get_data(double x,double y)
    {
        a=x;
        b=y;
    }
};
class rectangle : public shape
{
public:
    void area_of_ret()
    {
        int area = a*b;
        cout<<"The Rectangle area is : "<<area<<endl;
    }
};
class triangle : public shape
{
public:
    void area_of_tri()
    {
        int area = 0.5*a*b;
        cout<<"The Triangle area is : "<<area<<endl;
    }
};
int main()
{
    rectangle obj;
    triangle obj2;
    double breadth,length,height,base;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>length>>breadth;
    cout<<"Enter the height and base of triangle: ";
    cin>>height>>base;
    obj.get_data(length,breadth);
    obj.area_of_ret();
    obj2.get_data(height,base);
    obj2.area_of_tri();
    getch();
}
