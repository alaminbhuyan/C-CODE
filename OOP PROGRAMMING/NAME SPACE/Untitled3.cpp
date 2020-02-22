#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
namespace First
{
int a;
class my_class
{
public:
    string name;
    void display(string na)
    {
        cout<<na<<endl;
    }
};
void fun();
}
void First :: fun()
{
    cout<<"hello how are you everyone"<<endl;
}
/*int main()  // we can access the namespace members using scope resulation operator..................
{
    First :: a = 5;
    cout<<"The value of a: "<<First::a<<endl;
    First :: fun();
    First :: my_class obj;
    obj.display("My Name is alamin bhuyan");

    getch();

}*/
using namespace First; //global declaration................if we declare in global we don't have to use scope resulation operator.........
int main()
{
    a=5;
    cout<<"The value of a: "<<First::a<<endl;
    fun();
    my_class obj;
    obj.display("My Name is alamin bhuyan");

    getch();
}
