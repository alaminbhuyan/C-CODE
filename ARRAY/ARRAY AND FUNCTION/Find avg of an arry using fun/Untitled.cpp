#include<iostream>
using namespace std;
double average(int arr[],int size); //function declaration.
int main()
{
    int num,i;
    double avg;
    cout<<"Enter the range of array: ";
    cin>>num;
    int arr[num];
    cout<<"\nEnter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    avg = average(arr,num);
    cout<<showpoint;
    cout<<"\nThe average of array elements is : "<<avg<<endl;
    return 0;
}
double average(int arr[],int size)
{
    int i,sum=0;
    double avg;
    for(i=0;i<size;i++)
    {
        sum= sum+arr[i];
    }
    avg= (double)sum/size;

    return avg;
}
