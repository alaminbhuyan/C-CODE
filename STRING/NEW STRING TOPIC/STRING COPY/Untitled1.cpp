//program to understand how to use strcpy()
#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    char ch[25],ch2[25];
    cout<<"Enter the first string: ";
    cin.getline(ch,25);

    strcpy(ch2,ch);
    cout<<"The first string is: "<<ch<<endl;
    cout<<"The second string is: "<<ch2;
    getch();
}
