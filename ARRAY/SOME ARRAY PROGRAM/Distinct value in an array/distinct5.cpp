#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15] = {2,2,3,5,5,6,7,8,2,3,7,10,5,6,7}; //2->3, 3->2, 5->3, 6->2, 7->3,
    //2,3,5,6,7,8,10
    //int a[8] = {2,3,5,2,7,5,6,8};
    int i,j=0,count=0;
    sort(a,a+15);
    for(i=0;i<15;i++)
    {
        if(a[i] == a[i+1])
        {
            count++;
        }
    }
    for(i=0;i<15;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j] = a[i];
            j++;
        }
        a[j] = a[14];
    }
    for(i=0;i<15-count;i++)
    {
        cout<<a[i]<<" ";
    }
}
