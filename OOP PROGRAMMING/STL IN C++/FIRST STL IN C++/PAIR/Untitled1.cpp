//program how to use pair and how to assign in different types
#include<bits/stdc++.h>
#include<iostream>
#include<utility>

using namespace std;
int main()
{
    pair <int,int> p;

    p.first = 10;
    p.second = 30;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p.first<<" + "<<p.second<<" = "<<p.first+p.second<<endl;
//////////////////////////////////////////////////////////////
    pair<int,char> p2;

    p2.first = 10;

    p2.second = 'A';

    cout<<p2.first<<" "<<p2.second<<endl;
///////////////////////////////////////////////////////////////

    pair<int , int> p3(30,40);
    cout<<p3.first<<" "<<p3.second<<endl;


}
