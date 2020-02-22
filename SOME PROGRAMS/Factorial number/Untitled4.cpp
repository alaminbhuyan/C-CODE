//program to print factorial number.................
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int num,fact=1,i;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"The factoreal number is: "<<fact;
}
