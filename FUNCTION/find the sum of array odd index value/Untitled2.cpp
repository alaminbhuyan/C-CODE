#include<iostream>
#include<conio.h>
using namespace std;
class pass
{
public:
    int  display_data(int x);
};
int pass :: display_data(int x)
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
   return sum;

}
int main()
{
    pass obj;
    int num;
    cout<<"Enter the range of array: ";
    cin>>num;
    cout<<"The sum of odd index of array values: "<<obj.display_data(num);
    getch();
}

