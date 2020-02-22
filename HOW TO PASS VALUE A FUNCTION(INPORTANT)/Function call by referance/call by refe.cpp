//function call by reference using pointer...................

#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
 int swap;
 swap=*x;
 *x=*y;
 *y=swap;
}
int main()
{
 int a=500, b=100;
 swap(&a, &b);  // passing value to function
 cout<<"Value of x is: "<<a<<endl;
 cout<<"Value of y is: "<<b<<endl;
 return 0;
}
