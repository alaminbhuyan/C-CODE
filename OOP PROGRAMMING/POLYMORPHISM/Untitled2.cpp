#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class shape
{
public:
    double dim1,dim2;
    shape(double dim1, double dim2)//assign a constructor...................
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }
};
class triangle : public shape
{
public:
    //double dim1,dim2;
    triangle(double dim1, double dim2)//assign a constructor...................
        :shape(dim1,dim2)
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
};
class rectangle : public shape
{
public:
    //double dim1,dim2;
    rectangle(double dim1, double dim2)//assign a constructor...................
        :shape(dim1,dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
int main()
{
    shape *s;
    triangle t(10,20);
    rectangle r(30,40);

    s = &t;
    cout<<"The triangle area is: "<<s->area()<<endl;

    s = &r;
    cout<<"The rectangle area is: "<<s->area()<<endl;

    getch();
}
