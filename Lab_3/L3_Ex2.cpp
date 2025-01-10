//Example 2: A C++ program to demonstrate the use of static member function.
#include <iostream>
using namespace std;
class Square
{
    private:
        int side;
        static int objectCount;
    public:
        Square()
        {
            objectCount++;
        }
        static int getCount()
        {
            return objectCount;
        }
};

int Square::objectCount = 0;

int main()
{
    Square s1;
    cout << "Total objects: " << Square::getCount() << endl;
    Square s2;
    cout << "Total objects: " << Square::getCount() << endl;
    return 0;
}
