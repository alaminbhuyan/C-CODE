#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class my_class
{
protected:
    string name;
    int age;
public:
    my_class()      //declaration a constructor..........................
    {
        cout<<"Enter your name; ";
        getline(cin,name);
        cout<<"Enter your age: ";
        cin>>age;
    }

    friend class my_another_class; //declaration a friend class........
};
class my_another_class //define the friend class
{
    public:
        void display(my_class &obj) // value pass by reference..............................
        {
            cout<<"Name: "<<obj.name<<endl<<"Age: "<<obj.age<<endl;
        }

};
int main()
{
    my_class obj1;
    my_another_class obj2;
    cout<<endl;
    obj2.display(obj1);
    getch();

}

