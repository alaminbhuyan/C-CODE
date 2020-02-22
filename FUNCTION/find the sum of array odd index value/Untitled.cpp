#include<iostream>
using namespace std;
class pass
{
public:
    void  display_data(int x);
};
void pass :: display_data(int x)
{
    int arr[x],i,sum=0;
    cout<<"Enter the elements of array: ";
    for(i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<x; i=i+2)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of odd value: "<<sum;

}
int main()
{
    pass obj;
    int num;
    cout<<"Enter the range of array: ";
    cin>>num;
    obj.display_data(num);
}
