
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    cout<<"The matrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
