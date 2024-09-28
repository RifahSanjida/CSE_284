//Example 4: Write a C++ program to understand public and private access of class data members.
#include<iostream>
using namespace std;

class BOX
{
    private:
        double length;
        double breadth;
        double height;
    public:
        double initData(double a, double b, double c)
        {
            length = a;
            breadth = b;
            height = c;
        }
        double calculateArea()
         {
             double a = length * breadth;
             return a;
         }
         double calculateVolume()
         {
             double v = length * breadth * height;
             return v;
         }

};
int main()
{
    BOX box1;

    box1.initData(42.5, 30.8, 19.2);

    cout<<"Area of BOX = "<<box1.calculateArea()<<endl;
    cout<<"Volume of BOX = "<<box1.calculateVolume()<<endl;

    return 0;
}
