#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 = "Hello world";
    string s2 = "C++ programming";

    cout<<"Before swap the string s1 is : "<<s1<<endl;
    cout<<"Before swap the sting s2 is : "<<s2<<endl;

    s1.swap(s2);
    cout<<endl<<endl;
    cout<<"After swap the string s1 is : "<<s1<<endl;
    cout<<"After swap the sting s2 is : "<<s2<<endl;
}
