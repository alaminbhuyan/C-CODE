#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    stringstream ss;
    ss<<num;
    string k;
    ss>>k;
    cout<<"\n"<<"An integer value is : "<<num<<"\n";
    cout<<"String representation of an integer value is : "<<k;
    cout<<endl<<endl;
    {int num=100;
    stringstream ss;
    ss<<num;
    string s;
    ss>>s;
    cout<<"\n"<<"An integer value is : "<<num<<"\n";
  cout<<"String representation of an integer value is : "<<s;}
}
