//Find Frequency of Characters of a String Object
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string str = "C++ programming is awesome";
    char ch = 'm';
    int count=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==ch)
            {
                count++;
            }
    }
    cout<<"The frequency of the 'a' character: "<<count;
    getch();
}
