//program in an array even number is even index and odd number is odd index................
#include<iostream>
using namespace std;
int main()
{
    int a[]= {11,17,21,4,6,8,7,10};
    int b[8];
    int i,j=0,k=0;
    for(i=0; i<8; i++)
    {
        if(a[i]%2==0)
        {
            //cout<<a[i]<<"\t";
            b[j]=a[i];
            j=j+2;
        }
        else
        {

            b[k+1]=a[i];
            k=k+2;
        }
    }
    for(j=0; j<8; j++)
    {
        cout<<b[j]<<"\t";
    }

}
