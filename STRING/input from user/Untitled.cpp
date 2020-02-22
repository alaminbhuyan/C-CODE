
//program to understand how to take input from user
//And how to use getline() function
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string m;
    cout<<"Enter your string name: ";
    getline(cin,m);

    cout<<"Your string name is: "<<m;

    getch();
}
