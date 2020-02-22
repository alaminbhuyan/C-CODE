
//program to print fibonacci series.....................
#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,i,fibo,num;//first can be = 0 or 1 whatever...................

    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The fibonacii series is =";
    cout<< "\t"<<first;
    cout<<"\t"<<second;
    for(i=2;i<=num;i++)
    {
        fibo=first+second;

        first=second;
        second=fibo;
         cout<<"\t"<<fibo;
    }


}
