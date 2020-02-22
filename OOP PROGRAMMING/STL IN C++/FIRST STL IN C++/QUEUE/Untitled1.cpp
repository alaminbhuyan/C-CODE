//this is an descending order
#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(10);
    q.push(100);
    q.push(400);
    q.push(700);
    q.push(200);

    //cout<<q.top();
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    cout<<endl<<endl;
     priority_queue<string> qu;
    qu.push("alamin");
    qu.push("nahid");
    qu.push("mim");
    qu.push("fatema");
    qu.push("josna");

    while(!qu.empty())
    {
        cout<<qu.top()<<endl;
        qu.pop();
    }
}
