#include<iostream>
#include<conio.h>
using namespace std;
class variance
{
public:
    int arr[];
    //void get_input(int);
    void display_output(int);
};


void variance :: display_output(int x)
{
    int arr[x],sum=0,i;
    float result=0,sum1=0;
    cout<<"Enter the elements of array: ";
    for(i=0; i<x; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<x; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of array elements: "<<sum<<endl;
    float mean = sum/x;

    cout<<"The mean is : "<<mean<<endl;

    for(i=0; i<x; i++)
    {
        result = mean - arr[i];
        result = result*result;
        sum1 = sum1 + result;
    }

    cout<<"The sum1 is : "<<sum1<<endl;

    float vari = 1/sum1;
    cout<<"The variance is : "<<vari<<endl;
}
int main()
{
    variance obj;
    int num;
    cout<<"Enter the range of array: ";
    cin>>num;
    obj.display_output(num);
    getch();
}
