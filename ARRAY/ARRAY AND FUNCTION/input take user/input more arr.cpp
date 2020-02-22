#include<iostream>
using namespace std;
void my_function(int arr[],int x);
int main()
{
    int num,i;
    int num2;
    cout<<"Enter the 1st range of array: ";
    cin>>num;
    int arr[num];

    cout<<"Enter the 1st elements of array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the 2nd range of array: ";
    cin>>num2;
    int arr1[num2];
    cout<<"Enter the 2nd elements of array: ";
    for(i=0; i<num2; i++)
    {
        cin>>arr1[i];
    }

    my_function(arr,num);
    my_function(arr1,num2);
    return 0;
}
void my_function(int arr[],int x)
{
    int i;
    cout<<"The array elements is: "<<endl;
    for(i=0; i<x; i++)
    {
        cout<<arr[i]<<endl;
    }
}
