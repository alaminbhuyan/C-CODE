//passing whole array to a function....................
#include<iostream>
using namespace std;
void passing_arr(int arr[],int size); //function declaration.....................
int main()
{
    int num;
    cout<<"Enter the range of array: ";
    cin>>num;
    int a[num];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }

    passing_arr(a,num); // function calling......................

    cout<<"\nNow the array elements of array: ";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<"\t";
    }

    return 0;
}
void passing_arr(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        arr[i] = arr[i] * arr[i];
        sum += arr[i];
    }
    cout<<"The sum is : "<<sum;
}
