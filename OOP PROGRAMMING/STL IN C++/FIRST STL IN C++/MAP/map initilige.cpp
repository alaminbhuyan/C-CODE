//program understand on map
#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    map<string , int> m;
    map<string, int>::iterator it;

    m["Alamin"]=10;
    m["Fatema"]=20;
    m["Tania"]=30;
    m["Nusrat"]=40;
   // m["Jannatul farduse"]=50;
    m.insert(make_pair("Jannatul farduse",70)); //here we also use make_pair function by insert();

    cout<<m["Alamin"]<<endl;
    cout<<m["Fatema"]<<endl;
    cout<<m["Tania"]<<endl;
    cout<<m["Nusrat"]<<endl;
    cout<<m["Jannatul farduse"]<<endl;

    ///////////////////////////////
    cout<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }

}
