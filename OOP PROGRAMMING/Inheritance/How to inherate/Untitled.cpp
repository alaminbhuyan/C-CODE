//program to understand how to assign inheritance topic...............
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
//Base class(parent class)
class vehicle
{
public:

    string brand="BMW";
    void display()
    {
        cout<<"tutu,tuut!\n";
    }

};
//Derived class(child class)
class car : public vehicle
{
public:
    string model="mustang";
};
int main()
{
    car myCar;
    myCar.display();
    cout<<myCar.brand + " " +myCar.model;
    getch();
    return 0;
}
