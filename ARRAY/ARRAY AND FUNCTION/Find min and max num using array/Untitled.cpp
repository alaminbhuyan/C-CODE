#include<iostream>
#include<conio.h>
void find_mini_max(int arr[],int size);//function declaration
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter the rang of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    find_mini_max(arr,num);//function call/
}
void find_mini_max(int arr[],int size) //function definition.
{
    int i;
    int minimum,maximum;
    minimum=maximum=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<minimum)
            minimum = arr[i];
        if(arr[i]>maximum)
            maximum = arr[i];
    }
     int mid,first,last;
     first = 0;
     last = size - 1;
     mid = (first+last)/2;
    cout<<"The minimum elements is : "<<minimum<<endl;
    cout<<"The mid elements is : "<<mid+1<<endl;
    cout<<"The maximum elements is : "<<maximum<<endl;
}
