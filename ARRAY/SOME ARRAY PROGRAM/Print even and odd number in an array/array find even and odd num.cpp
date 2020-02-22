#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int count=0;
    for(int i=1; i<=num; i++)
    {
        count=0;
        if(i%2==0)
        {
            count++;
        }
        if(count==0)
        {
            cout<<i<<"\t";
        }
    }
    cout<<endl<<endl<<endl;
    for(int i=1; i<=num; i++)
    {
        count=0;
        if(i%2==0)
        {
            count++;
        }
        if(count!=0)
        {
            cout<<i<<"\t";
        }
    }
}
