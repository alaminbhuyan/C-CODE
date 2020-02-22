
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int st=0,mt=INT_MAX,t;
    int a1[9]={8, 1, 6, 3, 5, 7, 4, 9, 2},
    a2[9]={6, 1, 8, 7, 5, 3, 2, 9, 4},
    a3[9]={4, 9, 2, 3, 5, 7, 8, 1, 6},
    a4[9]={2, 9, 4, 7, 5, 3, 6, 1, 8};

    int a5[9]={8, 3, 4, 1, 5, 9, 6, 7, 2},
    a6[9]={4, 3, 8, 9, 5, 1, 2, 7, 6},
    a7[9]={6, 7, 2, 1, 5, 9, 8, 3, 4},
    a8[9]={2, 7, 6, 9, 5, 1, 4, 3, 8},
    m[9];
    for(int i=0;i<9;i++)
    {
        cin>>t;
        m[i]=t;

    }
    for(int i=0;i<9;i++)
    {
        int a;
        a=a1[i]-m[i];
        a=abs(a);
        st+=a;
    }
    if(st<mt)
    {
        mt=st;
    }
    st=0;
    for(int i=0;i<9;i++)
    {
        int a;
        a=a2[i]-m[i];
        a=abs(a);
        st+=a;
    }
    if(st<mt)
    {
        mt=st;
    }
    st=0;
    for(int i=0;i<9;i++)
    {
        int a;
        a=a3[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    st=0;
    for(int i=0;i<9;i++)
    {
        int a;
        a=a4[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    st=0;
    for(int i=0;i<9;i++)
    {
        int a;
        a=a5[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    st=0;
    for(int i=0;i<9;i++)
    {
        int a;
        a=a6[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    st=0;
        for(int i=0;i<9;i++)
    {
        int a;
        a=a7[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    st=0;
        for(int i=0;i<9;i++)
    {
        int a;
        a=a8[i]-m[i];
        a=abs(a);
        st+=a;
    }
        if(st<mt)
    {
        mt=st;
    }
    cout<<mt<<endl;
    return 0;
}
