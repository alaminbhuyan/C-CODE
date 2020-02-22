#include<iostream>
#include<conio.h>
using namespace std;
int squre(int x)
{
    int result = x*x;
    return result;
}
int main()
{
    int a=10;
    cout<<"Before calling the function a is : "<<a<<endl;
    squre(a);
    cout<<"After calling the function a is : "<<a<<endl;

    getch();

}
