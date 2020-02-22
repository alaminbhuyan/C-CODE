#include<iostream>
#include<string>
using namespace std;
class car
{
public:
    int speed(int max_speed);
};
int car::speed(int max_speed)
{
    return max_speed;
}
int main()
{
    car c;
    cout<<c.speed(200);
}
