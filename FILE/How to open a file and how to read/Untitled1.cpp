#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ifstream file("stu_details.txt"); //we use ifstream keyword when we want read a file ...............
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
    getch();
}
