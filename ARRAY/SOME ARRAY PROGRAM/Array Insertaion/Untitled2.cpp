//program to insert new elements in an array using function.......................
#include<iostream>
using namespace std;
void insert(int arr[],int n,int pos,int ele)
{
    int i;


    for(i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos]  = ele;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int num,i;
    cout<<"Enter the range of array: ";
    cin>>num;
    int array[num];
    cout<<"Enter the array elements: ";
    for(i=0; i<num-1; i++)
    {
        cin>>array[i];
    }
    cout<<"The array is: ";

    for(i=0; i<num-1; i++)
    {
        cout<<array[i]<<"\t";
    }
    int position,element;
    cout<<"\nEnter the position where you want to enter a new elements: ";
    cin>>position;
    cout<<"Enter the element that you want to insert in array: ";
    cin>>element;
    insert(array,num,position,element);
    return 0;

}
