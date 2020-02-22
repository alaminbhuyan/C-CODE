//program to understand to return a value from a function..............
#include<iostream>
#include<conio.h>
using namespace std;
class return_method
{
public:
    int display_data(int);
};
int return_method :: display_data(int x)
{

    return x;

}
int main()
{
    return_method obj;
    int num;
    cout<<"Enter  a number: ";
    cin>>num;
   cout<<"The return value is : "<<obj.display_data(num)<<endl;
   cout<<"The sum of return value is : "<<obj.display_data(num+10);
   getch();
}
