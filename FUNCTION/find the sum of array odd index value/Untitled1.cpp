#include<iostream>
using namespace std;
class myclass
{
public:
    int arr[];
    void add_data();

};
void myclass :: add_data()
{
    int num,i,sum=0;
    cout<<"Enter the range of array: ";
    cin>>num;
    cout<<"Enter the elements of array:";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<num;i=i+2)
    {
        sum=sum+arr[i];
    }
    cout<<"The  sum of array odd index value: "<<sum;
}
int main()
{
    myclass obj;
    obj.add_data();
}
