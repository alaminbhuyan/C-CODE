#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
    int random_number;
    for(int i=1;i<=5;i++)
    {
         random_number = rand()%100+2;
        cout<<"The random number is: "<<random_number<<endl;
    }
   getch();
}
