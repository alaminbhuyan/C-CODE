#include<iostream>
using namespace std;
inline void add(int a,int b)
{
    cout<<"The sum of a+b: "<<a+b<<endl;
}
inline void sub(int a,int b)
{
    cout<<"The subtraction of a-b: "<<a-b<<endl;
}
inline void mul(int a,int b)
{
    cout<<"The multiplication of a*b: "<<a*b<<endl;
}
inline void div(double a,double b)
{
    cout<<"The division of a/b: "<<a/b<<endl;
}
inline void mod(int a,int b)
{
    cout<<"The modulus of a%b: "<<a%b<<endl;
}
int main()
{
    add(5,5);
    sub(5,5);
    mul(5,5);
    div(5,5);
    mod(5,5);
    return 0;
}
