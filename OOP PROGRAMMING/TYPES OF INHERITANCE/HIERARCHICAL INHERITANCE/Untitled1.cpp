#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
public:
    double a;
    double b;
    void get_data(double x,double y)
    {
        a=x;
        b=y;
    }
};
class Rectangle : public Shape
{
public:
    double area_of_rac()
    {
        double area = a*b;
        return area;
    }
};
class Triangle : public Shape
{
public:
    double area_of_tri()
    {
        double area = 0.5*a*b;
        return area;
    }
};
int main()
{
    Rectangle obj1;
    Triangle obj2;
    double length,breadth,height,base;
    cout<<"Enter the length of the Rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the Rectangle: ";
    cin>>breadth;
    obj1.get_data(length,breadth);
    double result = obj1.area_of_rac();
    cout<<"The Rectangle area is : "<<result<<endl;

    cout<<"Enter the height of the Triangle: ";
    cin>>height;
    cout<<"Enter the base of the Triangle: ";
    cin>>base;
    obj1.get_data(height,base);
    double result2 = obj2.area_of_tri();
    cout<<"The Triangle area is : "<<result2<<endl;
    getch();
}
