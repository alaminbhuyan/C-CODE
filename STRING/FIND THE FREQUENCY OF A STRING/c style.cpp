//Find Frequency of Characters in a C-style String
#include<iostream>
using namespace std;
int main()
{
    char ch [] = "C programming is so powerful programming language", check = 'm';
    int count=0;

    for(int i=0; ch[i] != '\0';i++)
    {
        if(ch[i]==check)
        {
            ++count;
        }
    }
    cout<<"The frequency of 'm' character: "<<count;
}
