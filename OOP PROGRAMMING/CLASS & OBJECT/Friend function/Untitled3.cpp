#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class my_class
{
private:
    string name;
    float gpa;
public:
    /*void set_data(string name,float gpa) //it also be work if we want to pass value from main function.............
    {
       this->name = name;
       this->gpa = gpa;
    }*/
    void set_data()
    {


            cout<<"Enter student name: ";
            getline(cin,name);
            cout<<"Enter the GPA: ";
            cin>>gpa;
            cin.ignore();


    }
    friend void frd_func(my_class); //friend function................

};
void frd_func(my_class obj) //friend function definition..................
{

    cout<<"Student Name: "<<obj.name<<endl<<"GPA: "<<obj.gpa<<endl;
}
int main()
{
    my_class obj;
    obj.set_data();              // then we have to write obj.set_data("Alamin bhuyan",4.5) input as your wish............


    frd_func(obj);               //friend function call.....................




    getch();
}

