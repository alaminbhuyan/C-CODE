#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int array[] = {60,80,90,10,50,30,20,70,100,40};
    cout<<" Before sort: ";
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    sort(array,array+5);
     cout<<"\n\n First five elements sort: ";
    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    getch();
}

