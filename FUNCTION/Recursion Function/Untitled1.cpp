#include<iostream>
#include<conio.h>
using namespace std;
unsigned long long int fact(int num)
{
    if(num==1)
        return 1;
    else
        return (num*fact(num-1));
}
int main()
{
    int n;
    cout<<"Enter your factorial number: ";
    cin>>n;
    unsigned long long int factrorial = fact(n);

    cout<<"\n\nThe factorial number is : "<<factrorial;

    getch();

    return 0;
}
