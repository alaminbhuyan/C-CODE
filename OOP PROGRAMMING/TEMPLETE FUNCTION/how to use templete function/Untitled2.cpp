#include<iostream>
using namespace std;
template<class T,class U>

    U add(T a, U b)
    {
        U result = a+b;
        return result;
    }
    template<class T,class U>
    U ad(U a, T b)
    {
        U result = a+b;
        return result;
    }


int main()
{
   cout<<"The sum is : "<<add(55,5.5)<<endl;
   cout<<"The sum is : "<<ad(6.5,55);
}
