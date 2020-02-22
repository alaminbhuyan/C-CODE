#include <iostream>
using namespace std;

plusFunc(int x, int y)
{
    return x + y;
}
plusFunc(int x, double y)
{
    return x + y;
}

plusFunc(double x, double y)
{
    return x + y;
}

int main()
{
    double a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"The sum is : "<<plusFunc(a,b);

    return 0;
}
