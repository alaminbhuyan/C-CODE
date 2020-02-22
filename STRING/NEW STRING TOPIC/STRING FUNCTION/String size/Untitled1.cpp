#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the string name: ";
    getline(cin,s1);

   int k =  s1.size();
    cout<<"The size of string is : "<<k;
}
