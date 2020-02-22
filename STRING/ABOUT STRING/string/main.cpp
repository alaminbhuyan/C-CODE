#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<cstring>

using namespace std;

int main()
{
    char name[]= {'a','l','a','m','i','n','\0'};
    cout<<name<<endl;
    cout<<name[3];
    cout<<"\n\n\n";
    cout<<"//////////////////////////////////////////\n";
    cout<<endl;
    char name2[]="alamin bhuyan";

    cout<<name2<<endl;
    cout<<"\nThe string length is: "<<strlen(name2);

    cout<<"\n\n\n";
    cout<<"//////////////////////////////////////////\n";
    cout<<endl;


    char arr[]= {'alamin'};
    cout<<arr;

    cout<<"\n\n\n";
    cout<<"//////////////////////////////////////////\n";
    cout<<endl;

    char name3[30];
    cout<<"Enter your name: ";
    gets(name3);
    cout<<"\nWelcome "<<name3;
    cout<<"\n\n\n";
    cout<<"//////////////////////////////////////////\n";
    cout<<endl;


    int size;
    cout<<"Enter the string size: ";
    cin>>size;
    char name4[size];
    cout<<"Enter your name: ";
    cin>>name4;


    cout<<"\nWelcome  "<<name4;

    getch();
    return 0;
}
