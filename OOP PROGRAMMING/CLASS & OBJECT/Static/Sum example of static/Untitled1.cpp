#include<iostream>
#include<string>
using namespace std;
class Account
{
public:

    int id;
    string name;
    static float salary;
    Account(int id, string name) //construct function declaration.......................
    {
        this->id=id;
        this->name=name;
    }
    void display()
    {
        cout<<"ID: "<<id<<"  "<<"Name: "<<name<<"  "<<"Salary: "<<salary<<endl;
    }
};
float Account :: salary = 25000;
int main()
{

    Account a1=Account(1030,"Alamin bhuyan");
    a1.display();
    Account a2=Account(1031,"Tania akter");

    a2.display();
    Account a3(1035,"kabir");
    a3.display();
    Account a4(1035,"kabir");
    a4.display();
    return 0;
}
