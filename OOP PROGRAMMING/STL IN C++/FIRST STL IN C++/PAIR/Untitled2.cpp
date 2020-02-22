//program using function in pair topic
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> A;
    A.first=10;
    A.second=20;

    cout<<A.first<<" "<<A.second<<endl;
    //we also data assign using pair make_pair function...................

    A = make_pair(50,100);
    cout<<A.first<<" "<<A.second<<endl;
    //we can also copy a pair when we want use same data type..............

    pair<int,int >A2(A);
    cout<<A.first<<" "<<A.second<<endl;

    //we can also use more than one pair inside a pair..................

    pair<string,pair<int , char> >student;

    student = make_pair("Alamin bhuyan",make_pair(1030,'A'));
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;
    return 0;
}
