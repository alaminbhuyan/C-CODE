
//program to understand access string............
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string m="Alamin";
    cout<<m[0]<<endl;
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    cout<<m[3]<<endl;
    cout<<m[4]<<endl;
    cout<<m[5]<<endl;
    cout<<"\n\n\n";
    cout<<m[0]<<"\t";
    cout<<m[1]<<"\t";
    cout<<m[2]<<"\t";
    cout<<m[3]<<"\t";
    cout<<m[4]<<"\t";
    cout<<m[5]<<"\t";

    //how to change string character..................
    cout<<"\n\n\n";
    m[0]='T';
    m[1]='a';
    m[2]='n';
    m[3]='i';
    m[4]='a';
    m[5]='a';
    cout<<m[0]<<"\t";
    cout<<m[1]<<"\t";
    cout<<m[2]<<"\t";
    cout<<m[3]<<"\t";
    cout<<m[4]<<"\t";
    cout<<m[5]<<"\t";

    getch();
}
