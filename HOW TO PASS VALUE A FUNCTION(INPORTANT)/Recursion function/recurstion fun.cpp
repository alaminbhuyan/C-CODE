//program to understand recursion function..............
#include<iostream>
using namespace std;
int factorial(long long int);  //function declaration......................
int main()
{
    int fact,num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The factorial is: "<<factorial(num)<<endl; //function call.............................
    return 0;
}
int factorial(long long int x)         //////////////function definition................................
{
    if(x<0)
        return (-1); // wrong value//
        if(x==0)
        return 1;
    else
    {
        return (x*factorial(x-1));
    }
}
