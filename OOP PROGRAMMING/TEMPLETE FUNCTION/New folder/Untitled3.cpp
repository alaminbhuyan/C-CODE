#include<iostream>
#include<conio.h>
using namespace std;
template<class template1,class template2,class template3>
template2 add(template1 a,template2 b,template3 c)
{
    return a+b+c;
}
int main()
{
    cout<<add(10,20.5,10);
    getch();
}
