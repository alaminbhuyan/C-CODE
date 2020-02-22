#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
public:
    string name;
    student(string name)
    {
       this -> name = name;//when local variable and global variable to be same than we use this -> keyword...............
    }
    void display()
    {
        cout<<"The name is: "<<name<<endl;
    }
};
int main()
{
    student object("Alamin bhuyan");
    object.display();
    getch();

}
