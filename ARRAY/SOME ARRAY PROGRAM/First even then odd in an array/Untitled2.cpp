//program to print first even then odd number
#include<iostream>
using namespace std;
int main()
{
    int num,i;

    cout<<"Enter the size of array: ";
    cin>>num;
    int a[num],b[num];
    cout<<"Enter the array elements: ";
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    int j=0,l=num-1;
    for(i=0; i<num; i++)
    {
        if(a[i]%2==0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            b[l] = a[i];
            l--;
        }
    }
    for(i=0; i<num; i++)
    {
        cout<<b[i]<<"\t";
    }
}
