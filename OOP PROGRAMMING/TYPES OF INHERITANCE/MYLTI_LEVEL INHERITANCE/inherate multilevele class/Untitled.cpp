//program to understand multilevel inheritance................
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//Base class
class  father
{
public:
    void display()
    {
        cout<<"my  name is Mostafa kamal\n";
    }
};
//child class
class son : public father
{
public:
    void display_data()
    {
        cout<<"I am the son of mostafa kamal\n";
    }
};
//child class
class grandson : public son
{

};
int main()
{
    grandson myobject;
    myobject.display();
    myobject.display_data();

    getch();
}
