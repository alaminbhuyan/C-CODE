//program how to short a array elements using short algorithm
#include<iostream>
#include<vector>//we have to declare this header file
#include<iterator>//we have to declare this header file
#include<algorithm>//we have to declare this header file
using namespace std;
bool myfun(int a,int b)
{
    return (a>b);
}
int main()
{
    vector<int> vec;
    vector<int>::iterator it;

    vec.push_back(50);
    vec.push_back(80);
    vec.push_back(30);
    vec.push_back(90);
    vec.push_back(70);
    vec.push_back(10);
    cout<<"Before sorting the elements is : \n";
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
    //now we gonna sort

    cout<<endl<<endl;
    cout<<"This is a ascending sort.......................\n";
    cout<<"After sorting the elements is : \n";
    sort(vec.begin(),vec.end());
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl<<endl<<endl;
    cout<<"This is a descending sort.......................\n";
    cout<<"After sorting the elements is : \n";
    sort(vec.begin(),vec.end(),myfun);
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl<<endl<<endl;
    //if we want sort for first number of elements we can do it........................
    cout<<"First three elements sort: ";
    sort(vec.begin(),vec.begin()+3);
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
     cout<<endl<<endl<<endl;
    cout<<"Last three elements sort: ";
    sort(vec.begin()+3,vec.begin()+6);
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
}
