#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    public:
    static int a,b;
    static void display()
    {
        cout<<"Enter two integer number: ";
        cin>>a>>b;
        cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
    }
};
int sample :: a;
int sample :: b;
int main()
{
    sample:: display();
    sample obj;
    obj.display();
}
