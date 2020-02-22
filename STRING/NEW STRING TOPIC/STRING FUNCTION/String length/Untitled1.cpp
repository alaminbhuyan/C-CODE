#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string name: ";
    getline(cin,s1);

    int k = s1.length();

    cout<<"The length of string is : "<<k;

    getch();
}
