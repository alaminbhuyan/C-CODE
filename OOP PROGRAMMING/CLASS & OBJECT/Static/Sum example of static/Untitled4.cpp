#include<iostream>
#include<string>
using namespace std;
class human
{
public:
    static int human_total;
    human()
    {
        human_total++;
    }
    void display()
    {
        cout<<"There are "<<human_total<<" people in this program."<<endl;
    }
};
int human :: human_total=0;
int main()
{
    cout<<human::human_total<<endl;
    human obj;
    human obj2;
    human obj3;
    human obj4;
    human obj5;
    obj.display();
    cout<<human::human_total<<endl;
}
