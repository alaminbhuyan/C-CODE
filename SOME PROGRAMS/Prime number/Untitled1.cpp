
//program to find prime number and sum of them.........................
#include<iostream>
using namespace std;
int main()
{
    int num,i,j,count,sum=0;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"\n\n";
    cout<<"Prime numbers are: ";
    for(i=1; i<=num; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
        {
            cout<<i<<"\t";
            sum+=i;
        }
    }

    cout<<"\n"<<"The sum is: "<<sum;
}
