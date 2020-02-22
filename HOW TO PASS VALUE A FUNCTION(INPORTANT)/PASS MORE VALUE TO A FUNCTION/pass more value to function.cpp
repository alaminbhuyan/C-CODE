//program to understand how to pass value in main() function to another function.................
// And this program pass tow value since in the function have tow parameter...................
#include<iostream>
#include<conio.h>
using namespace std;
class passing_method
{
public:
    void display_data(int,int);
};
void passing_method :: display_data(int x , int y)
{
    cout<<"The passing two value  is : "<<x<<"  "<<y<<endl;
    cout<<"The passing two value sum is : "<<x+y<<endl;

}
int main()
{
    passing_method obj;
    int num1,num2;
    cout<<"Enter the value of num1 and num2: ";
    cin>>num1>>num2;
    obj.display_data(num1,num2);
    getch();
}
