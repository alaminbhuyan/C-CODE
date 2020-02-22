//program to understand babul shorting.....................
#include<iostream>
using namespace std;
int main()
{
    int num,i,j,temp;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    cout<<"The storage elements of array: ";
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[j]>arr[i]) //if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

