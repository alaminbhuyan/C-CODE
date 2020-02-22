//how to find size of an  array
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[8]={10,5,10,3,2,4,5,10};
    int size = sizeof(a)/4;
    int size2 = sizeof(a)/sizeof(a[0]);
    int len = *(&a + 1) - a;
    cout<<size<<endl;
    cout<<size2<<endl;
    cout<<len;
}
