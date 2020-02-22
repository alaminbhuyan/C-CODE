/*
     front()
     back()
     empty()
     pop_front()
     pop_back()
     clear()
     size()
*/
#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    int array[]= {10,20,30,40,50,60,70,80,90,100};
    list<int> mylist(array,array+10);
    list<int>::iterator it;
    cout<<"The elements of list: ";
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
    /*list<int>mylist;
    if(mylist.empty())
        cout<<"In this list have no elements";
    else
        cout<<"In this list have some elements";

        */
    cout<<endl;

    cout<< mylist.front()<<endl;           //this function print the first elements of list
    cout<<mylist.back()<<endl;             //this function print the last elements of list

    //mylist.clear();

    //cout<<mylist.size();

    mylist.pop_front();
    mylist.pop_front();
    mylist.pop_front();
    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_back();
     for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
}
