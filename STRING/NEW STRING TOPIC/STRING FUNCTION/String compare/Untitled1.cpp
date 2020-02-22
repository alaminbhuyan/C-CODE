#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string s1 = "Hello world";
    string s2 = "C++ programming";
    int k = s1.compare(s2);
    if(k==0)
        cout<<"The string is same"<<endl;
    else
        cout<<"The string is not same";
    getch();
}
