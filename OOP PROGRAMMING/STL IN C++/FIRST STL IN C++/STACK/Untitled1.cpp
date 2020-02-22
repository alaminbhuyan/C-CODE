//last in first out
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("alamin");
    s.push("nahid");
    s.push("shamim");
    s.push("karim");
    //s.pop(); //this function use to remove the top elements of a stack...........
    //cout<<s.top()<<endl; //this function use to print the first elements of a stack.................
    while(!s.empty())
    {
        string x;
        x = s.top();
       //cout<< s.top()<<endl; //this also will be work
        cout<<x<<endl;
        s.pop();
    }
}
