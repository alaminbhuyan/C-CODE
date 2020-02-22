#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num&1)
    {
        cout<<"The number is odd number";
    }
    else
    {
        cout<<"The number is even number";
    }
    return 0;
}
