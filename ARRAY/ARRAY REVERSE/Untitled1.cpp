
//program to print array reverse.......................
#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,num,temp,j;
    cout<<"How many numbers do y want take: ";
    cin>>num;
    cout<<"Enter the number: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Before reversing the array is : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }

    for(i=0,j=num-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
     cout<<"\n\n";
    cout<<"After reversing the array: ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
