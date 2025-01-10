//Example 1: A C++ program to demonstrate the single level inheritance.
#include<iostream>
using namespace std;

class Shape
{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
};

class Rectangle: public Shape
{
    public:
        int getArea()
        {
            return(width * height);
        }
};

int main()
{
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(12);

    cout<<"Total area: "<<rect.getArea()<<endl;

    return 0;
}
