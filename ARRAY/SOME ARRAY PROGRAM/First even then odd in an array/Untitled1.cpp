//program to print first even then odd number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    int b[6];
    int first_item = 0,last_item = 5;
    int i;
    for(i=0;i<6;i++)
    {
        if(a[i]%2==0)
        {
            b[first_item] = a[i];
            first_item++;
        }
        else
        {
            b[last_item] = a[i];
            last_item--;
        }
    }
    for(i=0;i<6;i++)
    {
        cout<<b[i]<<"\t";
    }
}
