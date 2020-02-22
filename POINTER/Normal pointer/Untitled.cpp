
//program to understand how to assign a pointer variable and access them...........
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string food="Pizza";
    string *ptr;
    ptr=&food;

    cout<<"value:"<<food<<endl;
    cout<<"value:"<<*ptr<<endl;
    cout<<"address:"<<&food<<endl;
    cout<<"address:"<<ptr<<endl;
    getch();
}
