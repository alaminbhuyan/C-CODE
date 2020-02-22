#include<iostream>
#include<conio.h>
using namespace std;
class copy_constructor
{
private:
    int x,y;
public:
    copy_constructor(int a,int b)
    {
        x=a;
        y=b;
    }
    copy_constructor(const copy_constructor &old_obj)
    {
        x=old_obj.x;
        y=old_obj.y;
    }
    int getxy()
    {
        cout << "p.x = " <<x << ", p.y = " <<y<<endl;  // Let us access values assigned by constructors
        //cout << "\np1.x = " << x<< ", p2.y = " <<y;
    }
};
int main()
{
    copy_constructor p(10,20);
    copy_constructor old_obj=p;
    p.getxy();
    old_obj.getxy();

}
