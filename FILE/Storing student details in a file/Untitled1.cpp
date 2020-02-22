#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;  //we use ofstream keyword when we want write or open a file ...............
    file.open("student_details.txt",ios::out|ios::app);
    for(int i=1;i<=3;i++)
    {
        cout<<"Enter your name: ";
        getline(cin,name);
        file<<i<<"."<<name<<"\t";
        cout<<"Enter your age: ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();
    }
    file.close();
    cout<<"Your data is store!!!!";

    getch();
}
