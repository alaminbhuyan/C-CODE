
//program to understand linear search.....................
#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int value,i,position=-1;
    cout<<"Enter a value: ";
    cin>>value;
    for(i=0;i<10;i++)
    {
        if(value==a[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"The value is not found";
    }
    else
        cout<<"The position is :"<<position;
}
