#include<iostream>
using namespace std;
void passing_arr_elements(int num); //function declaration...................
int main()
{
    int n;
    cout<<"Enter the array rang: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        passing_arr_elements(a[i]); //function calling...................
    }
    return 0;
}
void passing_arr_elements(int num) //function definition.......................
{
    if(num%2==0)
        cout<<num<<" is even number"<<endl<<endl;
    else
        cout<<num<<" is odd number"<<endl<<endl;
}
