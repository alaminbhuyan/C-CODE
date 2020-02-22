
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student
{
private:
    string name;
    string gmail;
    int rollno;
    float gpa;
public:
    void setdata(string a, string b, int c, float d)
    {
        name=a;
        gmail=b;
        rollno=c;
        gpa=d;
    }
    void getdata()
    {
        cout<<"Name:"<<name<<endl<<"Gmail:"<<gmail<<endl<<"Rollno:"<<rollno<<endl<<"GPA:"<<gpa<<endl;
    }
};
int main()
{
    student stu;
    stu.setdata("Alamin","alaminbhuyan321@gmail.com",1030,4.5);
    stu.getdata();
}
