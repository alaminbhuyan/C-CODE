//program to find even and odd number in an array
#include<iostream>
using namespace std;
int main()
{
   int n,i,count;
   cout<<"Enter the range of array: ";
   cin>>n;
   int a[n];
   cout<<"Enter the elements of array: ";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<"odd numbers are: ";
   for(i=0;i<n;i++)
   {
       count=0;
       if(a[i]%2==0)
       {
           count++;
       }
       if(count==0)
       {
           cout<<a[i]<<"\t";
       }
   }
   cout<<endl<<endl;
    cout<<"even numbers are: ";
    for(i=0;i<n;i++)
   {
       count=0;
       if(a[i]%2==0)
       {
           count++;
       }
       if(count!=0)
       {
           cout<<a[i]<<"\t";
       }
   }

}
