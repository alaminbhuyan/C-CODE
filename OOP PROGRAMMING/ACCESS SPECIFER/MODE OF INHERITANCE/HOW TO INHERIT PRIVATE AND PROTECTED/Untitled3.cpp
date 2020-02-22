#include<iostream>
#include<string>
using namespace std;
class A
{
private:
    string name;
    int id;
//public:

    friend class B;
};
class B
{
public:

    void display(A obj)
    {
        cout<<"Enter name: ";
        getline(cin,obj.name);
        cout<<"Enter id: ";
        cin>>obj.id;

        //cout<<obj.name<<endl<<obj.id;
    }
    void display2(A obj)
    {
        display(B obj);
        cout<<obj.name<<endl<<obj.id;
    }

};
class C : public B
{
public:

};
int main()
{
    C ob;
    A ob2;
    B ob3;
    ob3.display(ob2);
    ob.display2(ob3);
}
