#include<iostream>
using namespace std;
int main()
{
    int num,count;
    cout<<"enter a number: ";
    cin>>num;

    cout<<"2\t";
    for(int i=3;i<=num;i++)
    {
        count = 0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
        {
            cout<<i<<"\t";
        }
    }
}
