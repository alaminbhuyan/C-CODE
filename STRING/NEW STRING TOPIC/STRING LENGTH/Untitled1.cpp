//program to understand how to use strlen()
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char ch[25];
    cout<<"Enter the string that you want find out length: ";
    cin.getline(ch,25);
    int length = strlen(ch);
    cout<<"\nThe length of string: "<<length;
    getch();
}
