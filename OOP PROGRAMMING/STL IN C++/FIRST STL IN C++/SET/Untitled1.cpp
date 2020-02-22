#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    set<string>:: iterator it;
    //set<int> s;
    //set<int>:: iterator it;
   /* s.insert(30);
    s.insert(20);
    s.insert(10);*/
    //s.erase(s.find(30));
    s.insert("alamin");
    s.insert("nahid");
    s.insert("mim");
    s.insert("faria");

   for(it=s.begin();it!=s.end();++it)
   {
       cout<<*it<<endl;
   }
}
