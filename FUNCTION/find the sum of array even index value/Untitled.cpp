#include<iostream>
#include<conio.h>
using namespace std;
class my_class
{
public:
    int arr[];
    void add_data();
};
void my_class :: add_data()
{
    int i,num,sum=0;
    cout<<"Enter the range of array: ";
    cin>>num;
    cout<<"Enter the elements of array: ";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i=i+2)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of even index of array is : "<<sum;
}
int main()
{
    my_class obj;
    obj.add_data();
    getch();
}
