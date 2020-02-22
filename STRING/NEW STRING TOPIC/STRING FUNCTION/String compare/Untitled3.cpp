#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the first string: ";
    getline(cin,s1);
    cout<<"Enter the second string: ";
    getline(cin,s2);

    int k = s1.compare(s2);

    if(k==0)
        cout<<"The string is equal"<<endl;
    else
        cout<<"The string is not equal";
}
