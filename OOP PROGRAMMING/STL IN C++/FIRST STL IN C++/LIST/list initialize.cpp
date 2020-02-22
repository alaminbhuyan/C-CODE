//list is like as vector
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> mylist;
    list<int>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_back(20);
    mylist.push_back(25);
    mylist.push_front(5);
    mylist.push_back(-5);

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }
}
