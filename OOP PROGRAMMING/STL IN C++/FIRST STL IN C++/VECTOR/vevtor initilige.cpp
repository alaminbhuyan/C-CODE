//program how to vector initialize
//vector is like as array
//#include<bits/stdc++.h>
#include<iostream>
#include<vector> // this function will be declare
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(10); // it's means vec[0] =10;
    vec.push_back(20);// it's means vec[1] =20;
    vec.push_back(30);// it's means vec[2] =30;
    vec.push_back(40);// it's means vec[3] =40;

    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;

    //we can change any index elements

    cout<<"After change: "<<endl;

    vec[2] = 50;
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<endl<<endl;

    ///////////////////////////////
    //we can find out the size of vector using size() function............

    cout<<"The vector size is: "<<vec.size();
    cout<<endl<<endl;

    //we can also it can using loop

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }

}
