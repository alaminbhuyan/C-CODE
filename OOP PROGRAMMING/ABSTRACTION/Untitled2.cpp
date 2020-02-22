#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;  //pure virtual function....or....abstract function...................
};
class rectangle : shape
{
public:
    void draw()
    {
        cout<<"Drawing rectangle........"<<endl;
    }
};
class triangle : shape
{
public:
    void draw()
    {
        cout<<"Drawing triangle.........."<<endl;
    }
};
int main()
{
    rectangle rec;
    rec.draw();
    triangle tri;
    tri.draw();
    getch();
}
