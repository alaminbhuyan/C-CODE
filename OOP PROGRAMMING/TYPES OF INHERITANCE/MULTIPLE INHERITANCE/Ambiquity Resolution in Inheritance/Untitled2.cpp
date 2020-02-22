//An ambiguity can also occur in single inheritance.
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
   public:
void display()
{
   cout<<? Class A?;
}
} ;
class B
{
  public:
 void display()
{
 cout<<? Class B?;
}
} ;
int main()
{
    B b;
   b.display();               // Calling the display() function of B class.
   b.B :: display();       // Calling the display() function defined in B class.
}
