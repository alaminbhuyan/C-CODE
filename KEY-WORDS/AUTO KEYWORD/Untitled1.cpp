//program to understand how to use auto key word
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    auto int x = 4;
    auto int y = 3.37;
    auto int ptr = &x;
    cout << typeid(x).name() << endl<< typeid(y).name() << endl<< typeid(ptr).name() << endl;

    return 0;
}
