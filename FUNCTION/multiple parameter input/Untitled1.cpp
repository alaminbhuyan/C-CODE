//program how pass multiple parameter in a function...............
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
void myFunction(string name,int age)
{
   cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
}
int main()
{
    myFunction("Alamin bhuyan",21);
    myFunction("Tania akter",22);
    myFunction("Fatema akter",20);
    myFunction("Mito akter",21);
    myFunction("Mim akter",24);
    getch();
}
