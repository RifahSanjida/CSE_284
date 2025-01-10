//Example 1: A C++ program to demonstrate the friend function.

#include<iostream>
using namespace std;

class Distance
{
   private:
       int meter;
       int value;

       friend int addvalue(Distance);
   public:
       Distance()//constructor
       {
           meter = 0;
       }
};

int addvalue(Distance d)
{
    cout<<"Enter the value you want to add: ";
    cin>>d.value;
    return d.meter + d.value;
}

int main()
{
    Distance D;
    cout<<"Distance: "<<addvalue(D);
    return 0;
}
