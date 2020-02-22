#include<iostream>
using namespace std;
class Box
{
private:
    int length;
    public:
    Box()
    :length(0)
    {

    }
    friend int boxlength(Box);
};
int boxlength(Box n)
{
    n.length+=10;
    return n.length;
}
int main()
{
    Box a;
    cout<<"Box length: "<<boxlength(a);

}
