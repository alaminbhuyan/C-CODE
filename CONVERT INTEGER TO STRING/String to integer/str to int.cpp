#include<iostream>
#include<sstream>
#include<cstring>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string s = "12:54:56";

    for(int i=0; i<s.size(); i++)
    {
        stringstream ss;
        ss<<s;
        int integer;
        ss>>integer;
      cout<<integer<<"\t";
    }


}
