#include<iostream>
using namespace std;
template<class T>
T add(T a, T b)
{
    T result = a+b;
    return result;
}
int main()
{
    int i=5,j=5;
    float m=2.5,n=2.5;
    cout<<"The sum of i and j is : "<<add(i,j)<<endl;
    cout<<"The sum of m and n is : "<<add(m,n);
    return 0;
}
