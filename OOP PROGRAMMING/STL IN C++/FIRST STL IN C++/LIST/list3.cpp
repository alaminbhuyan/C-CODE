//program how to insert a elements in list
//program how to convert an array a list
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int array[]= {10,20,30,40,50,60,70,80,90,100};
    list<int> mylist(array,array+10);
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl<<endl<<endl;
    //it = mylist.begin();
    /*it++;
    mylist.insert(it,200);
    cout<<*it<<endl<<endl;*/

    it=find(mylist.begin(),mylist.end(),80);

    mylist.insert(it,200);

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }
    getch();
}
