/*program to understand how to use data formating such as [showpoints .....no showpoitns....setprecision...fixed....setw]*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"Enter  two numbers: ";
    cin>>num1>>num2;


    double sum= num1+num2;
    double sub= num1-num2;

    double mul= num1*num2;
    double div= num1/num2;
    cout<<showpoint; //////////////////////////////////
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The sub is : "<<sub<<endl;
    cout<<noshowpoint;///////////////////////////////////
    cout<<"The mul is : "<<mul<<endl;
    cout<<"The div is : "<<div<<endl;

    cout<<"\n\n\n\n";
    cout<<fixed;
     cout<<setprecision(2);////////////////////////////
    cout<<showpoint;//////////////////////////////////

    cout<<"The sum is : "<<sum<<endl;
    cout<<"The sub is : "<<sub<<endl;
    //////////////////////////////////
    cout<<"The mul is : "<<mul<<endl;
    cout<<"The div is : "<<div<<endl;

    cout<<"\n\n\n\n";

     cout<<setprecision(10);////////////////////////////
    cout<<showpoint;//////////////////////////////////

    cout<<"The sum is : "<<sum<<endl;
    cout<<"The sub is : "<<sub<<endl;
    //////////////////////////////////
    cout<<"The mul is : "<<mul<<endl;
    cout<<"The div is : "<<div<<endl;
    cout<<"\n\n\n\n";
    cout<<fixed;
     cout<<setprecision(2);////////////////////////////
    cout<<showpoint;//////////////////////////////////

    cout<<setw(20)<<"sum  : "<<sum<<endl;
    cout<<setw(20)<<"The sub is : "<<sub<<endl;
    //////////////////////////////////
    cout<<setw(20)<<"mul is : "<<mul<<endl;
    cout<<setw(20)<<"The div is : "<<div<<endl;

    getch();
}
