#include<iostream>
#include<conio.h>
using namespace std;
class point
{
private:               //access spicefire
    int x,y;
public:               //access spicifire
    point(int a,int b)           //declaration parameterize constructor....................
    {
        x=a;
        y=b;
    }
    point(const point &p)
    {
        x = p.x;
        y = p.y;

    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point p1(10 , 20);// Normal constructor is called here
    point p = p1;// Copy constructor is called here


    cout << "p.x = " << p.getx() << ", p.y = " << p.gety();  // Let us access values assigned by constructors
    cout << "\np1.x = " << p1.getx() << ", p2.y = " << p1.gety();
}
