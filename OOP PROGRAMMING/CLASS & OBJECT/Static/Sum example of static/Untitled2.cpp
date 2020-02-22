#include<iostream>
#include<string>
using namespace std;
class Account
{
public:

    int id;
    string name;
    static int count;

    Account(int id,string name)
    {
        this->id=id;
        this->name=name;
        count++;
    }
    void display()
    {
        cout<<"ID: "<<id<<"  "<<"Name: "<<name<<endl;
    }
};
int Account :: count=0;
int main()
{
    Account a1=Account(1030,"Alamin bhuyan");
    Account a2=Account(1031,"Tania akter");
    Account a3=Account(1032,"Farhan abir");
    Account a4=Account(1033,"Ishak bhuyan");
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    cout<<"Total object are: "<<Account::count;
    return 0;
}
