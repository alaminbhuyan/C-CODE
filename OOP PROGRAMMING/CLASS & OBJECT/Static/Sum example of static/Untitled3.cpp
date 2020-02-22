//program to understand how to work a static keyword.........
//A static keyword is keyword that store its value................
#include<iostream>
#include<string>
using namespace std;
int main()
{
    static int a;
    while(true)
    {
        cout<<a++<<endl;
        if(a==10)
            break;
    }


}
