#include<iostream>
using namespace std;
int main()
{
    int a[20],i,j,num;
    cout<<"How many number do you want take: ";
    cin>>num;
    cout<<"\n"<<"Enter your numbers: ";
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    cout<<"\n"<<"Before reversing the array: ";
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n\n";
    cout<<"\n"<<"After reversing the array: ";
    for(j=num-1;j>=0;j--)
    {
        cout<<a[j]<<"\t";
    }


}
