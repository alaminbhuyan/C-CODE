#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string str1 ="Alamin";
    string str2 = " Bhuyan";
    string str3;
    str3=str1;
    cout<<"The copy string is str3: "<<str3<<endl;

    str3 = str1 + str2;
     cout<<"\nThe sum of string is str3: "<<str3<<endl;

     int len;
     len = str1.size();
     cout<<"\nThe length of string 1 : "<<len<<endl;

     cout<<"The length of string 1 : "<<str1.length();
    getch();

}
