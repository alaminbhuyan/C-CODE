//program how to use iterator in vector
//iterator is like as pointer
#include<iostream>
#include<vector>//we have to declare this header file
#include<iterator>//we have to declare this header file
using namespace std;
int main()
{
    vector<int> vec;
    vector<int>::iterator it;

    for(int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"  ";
    }

  it = vec.begin(); //this means it point the first elements of vector


    cout<<endl<<*it;

    //we can also print vector elements using iterator

    cout<<endl<<endl;

    for(it = vec.begin();it != vec.end(); it++)
    {
        cout<<*it<<"\t";
    }
}
