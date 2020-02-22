#include<iostream>
#include<conio.h>
using namespace std;
int passing_arr(int arr[],int size);
int main()
{
    int num;
    cout<<"Enter the rang of array: ";
    cin>>num;
    int a[num];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }

   passing_arr(a,num);
   for(int i=0;i<num;i++)
   {
       cout<<a[i]<<"\t";
   }
    return 0;
}
int passing_arr(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        arr[i] = arr[i] * arr[i];

    }
    return (arr,size);
}
