#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app);
    cout<<"Enter your name: ";
    getline(cin,name);
    file<<"Welcome "<<name<<endl;
    file.close();
    cout<<"Your data is store";
    getch();
}
