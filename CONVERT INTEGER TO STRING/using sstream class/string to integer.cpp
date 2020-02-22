#include<iostream>
#include<sstream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    int a=123456789123654;
    cout<<"The value of a is: "<<a<<endl<<endl;
    string s = "123456789123654";
    stringstream ss;
    ss<<s;
    int i;
    ss>>i;
    cout<<"The given string is : "<<s<<endl<<endl;
    cout<<"Integer value of the string is: "<<i<<endl<<endl;

    stringstream ss2;
    ss2<<i;
    string b;
    ss2>>b;
   cout<<"string value of the integer is: "<<b;
   getch();
}
