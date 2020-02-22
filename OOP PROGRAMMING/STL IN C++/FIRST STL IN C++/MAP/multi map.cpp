//in the multi map  we can use duplicate elements
//it is same as map
#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string,int> m;
    multimap<string,int> :: iterator it;

    m.insert(make_pair("alamin",1030));
    m.insert(make_pair("alamin",1030));
    m.insert(make_pair("alamin",1030));
    m.insert(make_pair("alamin",1030));

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
