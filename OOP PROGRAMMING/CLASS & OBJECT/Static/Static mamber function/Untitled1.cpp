#include<iostream>
#include<conio.h>
using namespace std;
class test
{
public:
    static void display(int x , int y) // declaration a static function
    {
        if(x>y)
            cout<<"x is big: "<<x<<endl;
        else if(x<y)
            cout<<"Y is big: "<<y<<endl;
        else
            cout<<"They are equal";
    }
};
int main()
{
    test::display(10,5);// this is access by using direct class name
    test obj;
    obj.display(5,10);
    obj.display(10,10);
    getch();
}
