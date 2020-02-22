#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<" Class A........"<<endl;
    }
};
class B
{
public:
    void display()
    {
        cout<<" Class B........"<<endl;
    }
};
class C : public A , public B
{
    public:
    void view()
    {
        A::display();  // Calling the display() function of class A.
        B::display();  // Calling the display() function of class B.
    }
};
int main()
{
    C obj;
    obj.view();
    getch();
}
