#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter range of array: ";
    cin>>num;
    int array[num][num],i,j,sum_dig1=0,sum_dig2=0,sum_row=0,sum_col=0;
    bool  f = 0;
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(i==j)
            {
                sum_dig1+=array[i][j];
            }
            if(i+j==(num+1)-2)
            {
                sum_dig2+=array[i][j];
            }
        }
    }

    if(sum_dig1==sum_dig2)
    {
        f = 1;
    }
   else
   {
       for(i=0;i<num;i++)
    {
        sum_row=0;
        sum_col=0;
        for(j=0;j<num;j++)
        {
            sum_row+= array[i][j];
            sum_col+= array[j][i];
        }
        if(sum_row==sum_dig1)
        {
            f = 1;
        }
       else if(sum_col==sum_dig1)
        {
            f = 1;
        }
    }
   }

   if(f==0)
    cout<<"This is not a magic square............";
   else
    cout<<"This is a magic square............";

    //cout<<endl<<sum_row;
}
