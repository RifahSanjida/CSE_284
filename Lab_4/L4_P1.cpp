//Practice Exercise 1: Write a C++ program to add two numbers. Accept these two numbers from
//the user in base class and display the sum of these two numbers in derived class.
#include<iostream>
using namespace std;

class Base
{
    protected:
        int a, b;
    public:
        void getNum()
        {
            cout<<"Enter 1st number: ";
            cin>>a;
            cout<<"Enter 2nd number: ";
            cin>>b;
        }
};

class Derived: public Base
{
    public:
        void displayNum()
        {
            int sum = a + b;
            cout<<"Sum of the numbers: "<<sum<<endl;
        }
};

int main()
{
   Derived obj;
   obj.getNum();
   obj.displayNum();
   return 0;
}
