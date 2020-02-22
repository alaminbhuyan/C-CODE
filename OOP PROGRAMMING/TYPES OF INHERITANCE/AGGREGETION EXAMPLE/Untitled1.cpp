#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class Address
{
public:
    string address_line,state,city;
    Address(string address_line,string city,string state)
    {
        this->address_line = address_line;
        this->state = state;
        this->city = city;
    }
};
class Employee
{
private:
    Address*address;
public:
    int id;
    string name;
    Employee( int id,string name,Address*address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Rode address: "<<address->address_line<<endl<<"City: "<<address->city<<endl<<"State: "<<address->state;
    }

};
int main()
{
    Address obj1("C-146, Sec-06","Dhaka","Uttara");
    Employee obj2(101,"Nakul",&obj1);
    obj2.display();
    getch();
}
/*#include <iostream>
using namespace std;
class Address {
    public:
   string addressLine, city, state;
     Address(string addressLine, string city, string state)
    {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};
class Employee
    {
        private:
        Address* address;  //Employee HAS-A Address
        public:
        int id;
        string name;
        Employee(int id, string name, Address* address)
       {
           this->id = id;
           this->name = name;
           this->address = address;
       }
     void display()
       {
           cout<<id <<" "<<name<< " "<<address->addressLine<< " "<< address->city<< " "<<address->state<<endl;
       }
   };
int main(void) {
    Address a1= Address("C-146, Sec-15","Noida","UP");
    Employee e1 = Employee(101,"Nakul",&a1);
            e1.display();
   return 0;
}*/
