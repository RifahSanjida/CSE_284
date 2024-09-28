//Practice Exercise 1: Write a class having two private variables and one member function which will return the area and perimeter of the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        double l,b;

    public:
        double initData(double x, double y)
        {
            l = x;
            b = y;
        }
        void getAreaanPerimeter(double &area, double &perimeter)
        {
            area = l * b;
            perimeter = 2 * (l + b);
        }
};

int main()
{
    Rectangle rect;
    rect.initData(40,25);

    double area, perimeter;
    rect.getAreaanPerimeter(area,perimeter);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
