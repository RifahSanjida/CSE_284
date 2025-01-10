//Practice Exercise 2: Write a C++ Program to calculate the area of different geometric shapes such as Circle, Triangle, and Rectangle. Use function overloading.
#include<iostream>
#include<cmath>
using namespace std;

class Geometry
{
    public:
        double area(double r)
        {
            return M_PI * pow(r, 2);
        }

        double area(double l, double w)
        {
            return l * w;
        }

        double area(double b, double h, int triangleFlag)
        {
            return 0.5 * b * h;
        }
};

int main()
{
    Geometry shape;
    double radius, length, width, base, height;

    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
    cout<<"Area of circle: "<<shape.area(radius)<<endl;
    cout<<endl;
    cout<<"Enter the length and width of the rectangle: "<<endl;
    cin>>length>>width;
    cout<<"Area of rectangle: "<<shape.area(length, width)<<endl;
    cout<<endl;
    cout<<"Enter the base and height of the triangle: "<<endl;
    cin>>base>>height;
    cout<<"Area of triangle: "<<shape.area(base, height, 1)<<endl;

    return 0;
}
