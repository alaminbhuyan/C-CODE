
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string name[5]={"alamin","tania","fatema"};
    name[3]="mim";
    name[4]="nusrat";
    for(int i=0;i<5;i++)
        cout<<name[i]<<endl;
    getch();
}
