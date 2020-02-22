/*String library function
1.strlen()
2.strcpy()
3.strcmp()
4.strcat()
5.strupr()
6.strlwr()*/


#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    //strlen()....................
    char str[]="Alamin bhuyan";
    cout<<"The string length is : "<<strlen(str)<<endl;
    //strcpy()...........................
    cout<<"\n//////////////////////////////////////\n\n";

    char str1[]="alamin bhuyan";
    char str2[50];
    strcpy(str2,str1);
    cout<<"The str2 is: "<<str2;

    cout<<"\n//////////////////////////////////////\n\n";
     //strcat().......................
    char str3[]="alamin";
    char str4[]=" bhuyan";
    strcat(str3,str4);
    cout<<str3;

      cout<<"\n//////////////////////////////////////\n\n";
      //strupr()........................
      char str5[]="alamin";
      strupr(str5);
      cout<<"The string is: "<<str5;

      cout<<"\n//////////////////////////////////////\n\n";
      //strlwr()........................
      char str6[]="ALAMIN";
      strlwr(str6);
      cout<<"The string is: "<<str6;
      cout<<"\n//////////////////////////////////////\n\n";
      //strcmp()........................
      char str7[]="alamin";
      char str8[]="Alamin";
      if(strcmp(str7,str8)==0)
        cout<<"The string is equal";
      else
        cout<<"The string is not equal";


    getch();
}
