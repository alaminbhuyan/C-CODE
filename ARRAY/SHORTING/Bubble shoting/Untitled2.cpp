#include<iostream>
using namespace std;
int main()
{
    int A[10] = {2,5,6,9,1,3,4,7,8,10};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(j=0;j<10;j++)
    {
        cout<<A[j]<<"\t";
    }
    return 0 ;
}

