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

    mylist.reverse(); // this function use for reverse the elements

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }
    cout<<"\nThe size of the list: "<<mylist.size()<<endl;

    mylist.clear();// this function use for clear the elements from the list
     cout<<"\nThe size of the list: "<<mylist.size()<<endl;
}

