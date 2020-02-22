#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8] = {2,2,3,5,5,6,7,8};
    int temp[6];
    int i,j=0;
    for(i=0;i<8;i++)
    {
        if(a[i] != a[i+1])
        {
            temp[j] = a[i];
            j++;
        }
        temp[j] = a[7];
    }
    for(j=0;j<6;j++)
    {
        cout<<temp[j]<<" ";
    }
}
