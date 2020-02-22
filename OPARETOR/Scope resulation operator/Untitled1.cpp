#include<iostream>
using namespace std;
int a=20;//global variable.......................
int main()
{
    int a=10;  //local variable..................

    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of a: "<<::a<<endl;
    :: a=60;
    cout<<"The value of a: "<<::a;
}
/*when you want print or access the global variable we have to use the scope resolution operator that means double colon ::*/
