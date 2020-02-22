//enumeration is a user define data type that are contains fixed set of constants.
#include<iostream>
#include<conio.h>
using namespace std;
enum week
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
int main()
{
    week day;
    day = Friday;
    cout<<"Day: "<<day+1<<endl;
    getch();
}
