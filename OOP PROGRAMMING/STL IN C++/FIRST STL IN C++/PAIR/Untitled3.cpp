//#include<bits/boost_concept_check.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<string,int> > vec;
   vector<pair<string,int> >::iterator it;
    //vec[0] = alamin 1030
    //vec[1] = tania 1031
    //vec[2] = fatema 1032
   vec.push_back(make_pair("alamin",1030));
   vec.push_back(make_pair("tania",1031));
   vec.push_back(make_pair("fatema",1032));
   vec.push_back(make_pair("mim",1033));

   cout<<vec[0].first<<"  "<<vec[0].second<<endl; //we can print like this formula
   cout<<vec[1].first<<"  "<<vec[1].second<<endl;
   cout<<vec[2].first<<"  "<<vec[2].second<<endl;




   cout<<endl<<endl;

   for(it=vec.begin();it!=vec.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }
}
