#include <iostream>
using namespace std;
class A
{
    protected:
    double a;
    public:
    void get_a()
    {
       std::cout << "Enter the value of 'a' : ";
       cin>>a;
    }
};

class B : public A
{
    protected:
    double b;
    public:
    void get_b()
    {
        std::cout << "Enter the value of 'b' : " ;
       cin>>b;
    }
};
class C
{
    protected:
    double c;
    public:
    void get_c()
    {
        std::cout << "Enter the value of c is : ";
        cin>>c;
    }
};

class D : public B, public C
{
    protected:
    double d=3;
    public:
    void mul()
    {
         get_a();
         get_b();
         get_c();
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;
         std::cout<<"The average of a,b,c: "<<a*b*c/d;
    }
};
int main()
{
    D obj;
    obj.mul();
    return 0;
}
