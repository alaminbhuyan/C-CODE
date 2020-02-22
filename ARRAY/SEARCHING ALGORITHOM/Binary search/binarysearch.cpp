#include<iostream>
using namespace std;
int main()
{
    int arr[100],first,mid,last,key,i,num;
    cout<<"Enter the range of array : ";
    cin>>num;
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search value: ";
    cin>>key;

    first=0;
    last=num-1;

    while(first<=last)
    {
        mid = (first+last) /2;
        if(key==arr[mid])
        {
            cout<<key <<"\tvalue position is :"<<mid+1;
            break;
        }
        else if(key>arr[mid])
            first=mid+1;
        else
            last=mid-1;

    }
    if(first>last)
        cout<<"The value is not found";
}
