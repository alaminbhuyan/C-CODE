#include<iostream>
using namespace std;
void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<A[j]<<"\t";
    }
}
int main()
{
    int array[10] = {2,5,6,9,1,3,4,7,8,10};
    bubble_sort(array,10);
    return 0 ;
}
