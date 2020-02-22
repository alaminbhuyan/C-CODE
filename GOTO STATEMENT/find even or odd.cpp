#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
        goto even;
    else
        goto odd;
even:
    cout<<"Enter number is even\n";


odd:
    cout<<"Enter number is odd\n";

    getch();
}
/*#include<iostream>
using namespace std;
void checkEvenOrNot(int num)


{
    if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    cout<<"is even"<< num;
    // return if even
    return;
odd:
    cout<<"is odd"<<num;
}

int main() {
    int num = 25;
    checkEvenOrNot(num);
    return 0;
}*/
