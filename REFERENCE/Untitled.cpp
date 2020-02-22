//program to understand how to define   reference  variable........
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string food="pizza";
    string &meal=food;

    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<&meal<<endl;

    getch();
}
