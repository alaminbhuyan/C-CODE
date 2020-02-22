#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the range of array: ";
    cin>>num;
    int array[num];
    cout<<"Enter the array elements: ";
    for(i=0;i<num-1;i++)
    {
        cin>>array[i];
    }
    cout<<"The array is: ";

        for(i=0;i<num-1;i++)
        {
            cout<<array[i]<<"\t";
        }

    int position,element;
    cout<<"\nEnter the position where you want to enter a new elements: ";
    cin>>position;
    cout<<"Enter the element that you want to insert in array: ";
    cin>>element;

    for(i=num;i>position;i--)
    {
        array[i] = array[i-1];
    }
    array[position]  = element;

    for(i=0;i<num;i++)
    {
        cout<<array[i]<<endl;
    }
}
