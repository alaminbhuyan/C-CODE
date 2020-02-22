#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(true) //we can also use .....while(1).....instead of....while(true)........................
    {
        try
    {
        int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
     cout<<"Enter the second number: ";
    cin>>num2;

    if(num2 == 0)
    {
        throw -1;
    }

    double result = (double)num1/num2;
    cout<<"The result is : "<<result;
    }
    catch(int x)             //we can also use catch(...) instead of catch(data_type parameter)...........
    {
        cout<<"Divide by zero is not possible."<<endl<<"Please try again !"<<endl;
    }

    }

    getch();
}
