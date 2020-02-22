#include<iostream>
#include<conio.h>
using namespace std;
void func(int *x)
{
   *x=500;
}
int main()
{
    int a=100;
    cout<<"Before calling function the value of a: "<<a<<endl;
    func(&a);
     cout<<"After calling function the value of a: "<<a<<endl;
     getch();
}
