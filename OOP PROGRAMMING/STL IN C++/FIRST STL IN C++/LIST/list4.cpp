//how to remove a elements in a list
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

   /*it = mylist.begin();
   mylist.erase(it);*/

   it = find(mylist.begin(),mylist.end(),80);
   mylist.erase(it);

   cout<<endl<<endl;
   for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }
    getch();
}

