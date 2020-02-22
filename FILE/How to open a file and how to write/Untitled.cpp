#include<iostream>
#include<conio.h>
#include<fstream>//when we will work with file than we will have to use this header file.......................
using namespace std;
int main()
{
    ofstream file;
    file.open("student.txt");
    file<<"I am alamin. I am from comilla.";
    file.close();
}
