#include<iostream>
using namespace std;
void passing_arr(int arr[]); //function declaration.....................
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={60,70,80,90,100};

    passing_arr(arr1); //function call...........
    passing_arr(arr2);   //function call...........
    return 0;
}
void passing_arr(int arr[5]) /////function definition.................
{
    int i;
    cout<<"The array elements is: "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}
