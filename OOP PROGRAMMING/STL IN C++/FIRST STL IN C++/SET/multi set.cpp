//set function is display ascending order
#include<iostream>
#include<set>
#include<vector>
#include<list>
using namespace std;
int main()
{
    multiset<int> s;
    multiset<int>::iterator it;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    for(it=s.begin();it!=s.end();++it)
   {
       cout<<*it<<endl;
   }
}
