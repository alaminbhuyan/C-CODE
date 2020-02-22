#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
    /*string str="12:45:45";
    //int a=9710897109105110;
    for(int i=0;i<str.size();i++)
    {
        cout<<(int)str[i]<<"\t";
    }*/
    int a,b;
    string s = "1:45:45pm";

    a = s[0];
    b = s[1];
    //cout<<a<<" "<<b;
    //((a==49)&&(b==50))?cout<<"What the fuck":cout<<"Ascii value is not match";
    if(s[8]=='p')
    {
        /*if((a==49)&&(b==50))
        {
            //cout<<"12";
            for(int  i=0; i<s.size()-2; i++)
            {
                cout<<s[i];
            }
        }*/
        if((a>=49&&a<=57)&&(b==58))
        {
            //a = a+12;
            //s[0] = s[0]+12;
            for(int  i=0; i<s.size()-2; i++)
            {
                cout<<s[i];
            }
        }
    }



}

