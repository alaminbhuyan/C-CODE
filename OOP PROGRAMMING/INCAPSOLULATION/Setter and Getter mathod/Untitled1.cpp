#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
private:
    string name;
public:
    void set_method(string x)
    {
        name = x;
    }
    string get_method()
    {
        return name;
    }
};
int main()
{
    student stu1;
    stu1.set_method("Alamin bhuyan");
    cout<<"The name is: "<<stu1.get_method();
    getch();
}
