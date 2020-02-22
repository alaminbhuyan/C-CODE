#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int a[8]={10,5,10,3,2,4,5,10},i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
            cout<<a[i]<<" ";
    }
}
