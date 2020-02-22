#include <iostream>
#include <boost/lexical_cast.hpp>
using namespace std;
int main()
{
    int i=11;
    string str = boost::lexical_cast<string>(i);
    cout<<"string value of integer i is :"<<str<<"\n";

}
