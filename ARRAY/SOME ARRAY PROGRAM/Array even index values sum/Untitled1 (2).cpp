#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The even index values are: ";
    for(int i=0;i<num;i=i+2)
    {
        cout<<arr[i]<<"\t";
        sum+=arr[i];
    }

    cout<<"\nThe sum of even index values: "<<sum;

    return 0;
}
