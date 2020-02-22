/*#include<bits/stdc++.h>
using namespace std;
int partision(int a[], int low, int high)
{
    int i,temp;
    high = a[10-1];
    low = -1;

    for(i=0; i<10; i++)
    {

        if(high>a[i])
        {
            low++;
            temp = a[i];
            a[i] = a[low];
            a[low] = temp;
        }
    }
    if(low<high)
    {
        temp = a[low+1];
        a[low+1] = a[10-1];
        a[10-1] = temp;
       int loc = low+1;
        //cout<<loc;
        return loc;
    }

    /*cout<<endl;

    for(i=0;i<10;i++)
     {
         cout<<a[i]<<" ";
     }
}

int main()
{
    int size,i;
    /*cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int arr[10] = {3,5,8,10,7,2,6,9,1,4};
    int pivot,first;
    pivot = arr[9];
    first = -1;
    int value = partision(arr,first,pivot);
    cout<<value;

}*/
#include<bits/stdc++.h>
using namespace std;
int partision(int a[],int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end =ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[lb],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}
int main()
{

}
