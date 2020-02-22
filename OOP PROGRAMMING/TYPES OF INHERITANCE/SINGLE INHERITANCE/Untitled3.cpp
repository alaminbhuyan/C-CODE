//program to understand the inheritance how to use multiple time string keyword library
#include<iostream>
#include<stdio.h>
#include<string>
#include<conio.h>
using namespace std;
class library
{
public:

    string stores_name;
    string book_name;
    int book_price;
    void display1()
    {
        cout<<" Store Name: "<<stores_name<<endl<<" Book Name: "<<book_name<<endl<<" Book price: "<<book_price<<endl;
    }
};
class the_buyer : public library
{
public:
    string buyer_name;
    int phone_number;
    void display2()
    {
        cout<<" Buyer name: "<<buyer_name<<endl<<" Phone number: "<<phone_number<<endl;
        display1();
    }
};
int main()
{
    the_buyer obj;
    obj.stores_name="alamin store";
    obj.book_name="Object Oriented Programming with C++";
    obj.book_price=250;
    obj.buyer_name="Alamin bhuyan";
    obj.phone_number=1875780315;
    obj.display2();
    getch();
}
