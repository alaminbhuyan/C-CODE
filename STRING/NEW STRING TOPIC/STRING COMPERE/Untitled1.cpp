#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[] = "mango";
    char buffer[50];
    do
    {
        cout<<"What's your favourite fruit?";
        cin>>buffer;
    }
    while(strcmp(key,buffer) != 0);
    {
        cout<<"Answer is correct!!!!";
    }
    return 0;

}
