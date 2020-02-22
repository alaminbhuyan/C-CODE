//In destructor there have no arguments / parameters......................
#include <iostream>
using namespace std;
class Employee
 {
   public:
        Employee()
        {
            cout<<"Constructor Invoked"<<endl;
        }
        ~Employee()
        {
            cout<<"Destructor Invoked"<<endl;
        }
        void display()
        {
            cout<<"function is called"<<endl;
        }
};
int main(void)
{
    Employee e1; //creating an object of Employee

    e1.display();
    return 0;
}
