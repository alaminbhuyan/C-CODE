#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"Enter the row and columns for first matrix: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter elements of matrix: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The matrix is : "<<endl;
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             cout<<arr[i][j]<<"\t";

        }
        cout<<endl;
    }
}
