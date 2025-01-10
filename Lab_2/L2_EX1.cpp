//Example 1: Write a C++ program to demonstrate the use of the default constructor.
#include<iostream>
using namespace std;

class Wall
{
    private:
        double length;

    public:

       Wall()
       {
           length = 5.5;
           cout<<"Creating a wall."<<endl;
           cout<<"Length: "<<length<<endl;
       }
};

int main()
{
    Wall wall1;
    return 0;
}
