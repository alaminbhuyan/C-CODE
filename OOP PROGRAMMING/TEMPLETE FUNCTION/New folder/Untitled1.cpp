#include<iostream>
#include<conio.h>
using namespace std;
template<class my_template>                          //template function assign............
void  add(my_template a, my_template b)
{

    cout<<"The sum is: "<<a+b;
    cout<<endl;
}
template<class my_template>
void  sub(my_template a, my_template b)
{

    cout<<"The subtraction is: "<<a-b;
    cout<<endl;
}
template<class my_template>
void  mul(my_template a, my_template b)
{

    cout<<"The multiplication is: "<<a*b;
    cout<<endl;
}
template<class my_template>
void  div(my_template a, my_template b)
{

    cout<<"The division is: "<<a/b;
    cout<<endl;
}
template<class my_template>
void  mod(my_template a, my_template b)
{

    cout<<"The modulus is: "<<a%b;
    cout<<endl;
}
int main()
{

    add(100,3);
    add(20.5,10.3);
    cout<<endl;
    sub(100,3);
    sub(20.5,10.3);
    cout<<endl;
    mul(100,3);
    mul(20.5,10.3);
    cout<<endl;
    div(100,3);
    div(20.5,10.3);
    cout<<endl;
    mod(100,3);



    getch();
}
