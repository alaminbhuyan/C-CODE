#include<iostream>
#include<conio.h>
using namespace std;
class return_method
{
public:
    int display_data(int,int);
};
int return_method :: display_data(int x, int y)
{

    return x+y;
}
int main()
{
    return_method obj;
    int num1,num2;
    cout<<"Enter the value of  num1 and num2: ";
    cin>>num1>>num2;

    cout<<"The return value of x+y: "<<obj.display_data(num1,num2);
    getch();
}

