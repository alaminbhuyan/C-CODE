//program in an array even number is even index and odd number is odd index
#include<iostream>
using namespace std;
int main()
{
    cout<<"You must give equal number of even and odd.....................................\n\n";
    int num;
    cout<<"Enter the range of array : ";
    cin>>num;
    int a[num],b[num];
    int i,j=0,k=0;
    cout<<"\nEnter the elements of array : ";
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    //////////////////////////////////////////////
    cout<<endl;
    for(i=0;i<num;i++)
    {
        cout<<i<<" index value is : "<<a[i]<<endl;
    }
    /////////////////////////////////////////////
    cout<<endl;

    for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            b[j] = a[i];
            j = j+2;
        }
        else
        {
            b[k+1] = a[i];
            k = k+2;
        }
    }
    //////////////////////////////////////////////
    for(i=0;i<num;i++)
    {
        cout<<i<<" index value is : "<<b[i]<<endl;
    }
}

