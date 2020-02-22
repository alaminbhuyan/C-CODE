//list is like as vector
//how to take input from user
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size of list: ";
    cin>>num;
    list<int> mylist(num);
    list<int>::iterator it;
    cout<<"Enter the elements of list: ";

    for( it=mylist.begin();it!=mylist.end();it++)
    {
        cin>>*it;
    }
    cout<<"\nThe elements of the list: ";
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
}


