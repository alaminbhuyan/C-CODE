#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,sum=0,i;
    float mean,result=0,sum1=0;
    cout<<"Enter the range of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of array elements: "<<sum<<endl;

    mean = sum/num;
    cout<<"The mean is: "<<mean<<endl;

    for(i=0;i<num;i++)
    {
        result = mean - arr[i];
        result = result*result;
        sum1 = sum1 + result;
    }

    cout<<"The sum1 is : "<<sum1<<endl;

    float variance = 1/sum1;
    cout<<"The variance is : "<<variance<<endl;

    getch();

}
