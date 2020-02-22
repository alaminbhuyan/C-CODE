#include<iostream>
using namespace std;
int main()
{
    int arr[]={69,2,221,7,8974};
    int min,max;
    min=max= arr[0];
    int sum=0;

    for(int i=1;i<5;i++)
    {
        if(min>arr[i])
            min = arr[i];
        if(max<arr[i])
            max = arr[i];
    }
    cout<<"Minimum number in the array is: "<<min<<endl;
    cout<<"Maximum number in the array is: "<<max;
}
