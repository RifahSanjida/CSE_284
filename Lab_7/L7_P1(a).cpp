//Practice Exercise 1(a): Define a class Distance with distances in feet and inch and with a print function to print the distance.
//a) overload < operator to compare two distances using member function.
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        int inches;
    public:
        // Constructor
        Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

        // Print function
        void print()
        {
            cout << feet << " feet " << inches << " inches" << endl;
        }
        // Overload < operator
        bool operator<(const Distance &d)
        {
            int totalInches1 = feet * 12 + inches;
            int totalInches2 = d.feet * 12 + d.inches;
            return totalInches1 < totalInches2;
        }
};

int main() {
    Distance d1(5, 8), d2(6, 3);

    cout << "Comparing distances:\n";
    d1.print();
    d2.print();

    if (d1 < d2)
        cout << "Distance 1 is smaller than Distance 2.\n";
    else
        cout << "Distance 1 is not smaller than Distance 2.\n";

    return 0;
}
