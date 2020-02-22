#include<iostream>
using namespace std;
class A
{
public:
    int length;
    int breath;
    A()
    {
        length = 0;
        breath = 0;
    }
    void operator ++()
    {
        length+= 2;
        breath+=2;
    }
    void display()
    {
        cout<<"The length is: "<<length<<endl;
        cout<<"The breath is: "<<breath<<endl;
    }
};
int main()
{
    A obj;
    cout<<"Before increment : \n";
    obj.display();
    ++obj;
    cout<<"After increment : \n";
    obj.display();
}
