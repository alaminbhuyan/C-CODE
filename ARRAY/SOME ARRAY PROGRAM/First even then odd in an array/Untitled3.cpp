//program to print first even number big_to_small then odd number big_to_small..............
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int temp,count=0;

    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n],b[n];
     int f=0,l=n-1;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
///////////////////////////////////////////////////////
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[f] = a[i];
            f++;
            count++;
        }
        else
        {
            b[l] = a[i];
            l--;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<"\t";
    }
///////////////////////////////////////////////////////////
    //cout<<"\nThe even numbers is: "<<count;
    cout<<endl;
    for(i=0; i<count; i++)
    {
        for(j=i+1; j<count; j++)
        {
            if(b[i]%2==0 && b[j]>b[i])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

        }
    }
    for(i=count; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(b[i]%2!=0 && b[j]>b[i])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

        }
    }
 /////////////////////////////////////////////////////
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<"\t";
    }
}

