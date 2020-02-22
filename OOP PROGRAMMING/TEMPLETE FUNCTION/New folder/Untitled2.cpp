//program to understand how to work multiple parameter in template function......................
#include<iostream>
#include<conio.h>
using namespace std;
template<class template1,class template2>
template2 add(template1 a,template2 b)
{
    return a+b;
}
int main()
{
    cout<<add(10,20.5);
}
