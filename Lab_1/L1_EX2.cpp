//Example 2: Write a C++ program to define a class BOX with member functions.
#include<iostream>
using namespace std;
class BOX
{
     public:
         double length, breadth, height;
         void input_value()
         {
             cout<<"Enter three sides of the box: "<<endl;
             cin>>length>>breadth>>height;
         }
         void print_value()
         {
             cout<<"Length: "<<length<<endl;
             cout<<"Breadth: "<<breadth<<endl;
             cout<<"Height: "<<height<<endl;
         }
         double volume()
         {
             double v = length * breadth * height;
             cout<<"Volume: "<<v<<endl;
         }
};
int main()
{
    BOX myBox;
    myBox.input_value();
    myBox.print_value();
    myBox.volume();

}
