#include<iostream>
using namespace std;
void my_function(int arr[],int x); //function declaration
int main()
{
    int num,i;
    cout<<"Enter the range of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    my_function(arr,num); //function call
    return 0;
}
void my_function(int arr[],int x)  //function definition.....................
{
    int i;
    cout<<"The array elements is : "<<endl;
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<endl;
    }
}
