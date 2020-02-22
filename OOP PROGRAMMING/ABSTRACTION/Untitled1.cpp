#include<iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
using namespace std;
class mobile_user          //abstract class.........................
{
public:
    void call()
    {
        cout<<"Hello world!"<<endl;
    }
    virtual void send_message() = 0;//abstract function.................or.....pure virtual function...............
};
class rahim : public mobile_user
{
public:
    void send_message()
    {
        cout<<"Hi,this is rahim"<<endl;
    }
};
class karim : public mobile_user
{
public:
    void send_message()
    {
        cout<<"Hi,this is karim"<<endl;
    }
};
int main()
{
    mobile_user *obj;
    obj->call();
    rahim r;
    obj = &r;
    obj->send_message();
    karim k;
    obj = &k;
    obj->send_message();
    getch();
}
