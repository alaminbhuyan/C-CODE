#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string s1 = "I Love You";
    string s2 = "I Love You";
    int k = s1.compare(s2);
    if(k==0)
        cout<<"The string is same"<<endl;
    else
        cout<<"The string is no same";
    getch();
}
