#include<iostream>
using namespace std;
void shorting(int arr[],int);//function declaration..............................
int main()
{
    int num;
    cout<<"Enter the range of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    shorting(arr,num);//function call.........................
    return 0;
}
void shorting(int arr[],int size)
{
    int temp,i,j;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)

        {
            if(arr[j]<arr[i])////this is ascending formula..........
           // if(arr[j]>arr[i])////this is descending formula..........
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"The storage elements of array is: ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
