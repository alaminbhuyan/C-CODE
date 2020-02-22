#include<iostream>
#include<conio.h>
using namespace std;
class Sum
{
private:
    int x,y,z;   //private variable................
public:
    void add()
    {
        cout<<"Enter two number: ";
        cin>>x>>y;
        z = x+y;
        cout<<"The sum is two numbers : "<<z<<endl;
    }
};
int main()
{
    Sum obj;
    obj.add();
    getch();
}
