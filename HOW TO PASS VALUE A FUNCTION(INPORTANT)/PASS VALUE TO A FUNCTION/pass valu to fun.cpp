//program to understand how to pass value in main() function to another function.................
// And this program pass one value since in the function have one parameter...................
#include<iostream>
#include<conio.h>
using namespace std;
class passing_method
{
public:
    void display_data(int );
};
void passing_method :: display_data(int x)
{
    cout<<"The passing value is : "<<x<<endl;
    cout<<"The sum is :"<<x+5;
}
int main()
{
    passing_method obj;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    obj.display_data(num);
    getch();
}
