//by using typedef we can also change custom data type.........
#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    char arr[20];
    int rollno;
};
int main()
{
    typedef struct student stu;
    stu b={"alamin bhuyan",1030};
   cout<<"Student Name: "<<b.arr<<endl<<"Rollno: "<<b.rollno<<endl;
   getch();
}
