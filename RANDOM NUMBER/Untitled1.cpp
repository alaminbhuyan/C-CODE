#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int guess_number,random_number;
        cout<<"Enter your guess number: ";
        cin>>guess_number;
        random_number = rand()%5 +1;
        if(guess_number == random_number)
        {
            cout<<"\nCongratulation.........You have won!!!!!!!!!!!!!!!!\n\n";
        }
        else
        {
            cout<<"\n\nYou have lost.....&.....If you want you can try again.\n";
            cout<<"\nYour random number was : "<<random_number<<endl<<endl;
        }
    }
    getch();
}
