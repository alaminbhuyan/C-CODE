//program to understand how to pass value by reference.........................
#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a=8,b=5;
    swap(a,b);
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return 0;
}
/////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x =  *y;
    *y = swap;
}
int main()
{
    int a=500,b=100;
    swap(&a,&b);
    cout<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b<<endl;
    return 0;
}*/
