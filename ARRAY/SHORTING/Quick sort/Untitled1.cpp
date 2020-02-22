#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pivot,temp,temp2,low,i,j,k,size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    pivot = a[size-1];
    low = -1;

    for(i=0; i<size; i++)
    {

        if(pivot>a[i])
        {
            low++;
            temp = a[i];
            a[i] = a[low];
            a[low] = temp;
        }
    }
    if(low<pivot)
    {
        temp = a[low+1];
        a[low+1] = a[size-1];
        a[size-1] = temp;
       int loc = low+1;
        cout<<loc;
    }

    cout<<endl;

    for(i=0;i<size;i++)
     {
         cout<<a[i]<<" ";
     }
}
