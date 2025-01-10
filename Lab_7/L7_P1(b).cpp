//Practice Exercise 1(b): Define a class Distance with distances in feet and inch and with a print function to print the distance.
//b) overload + operator to add two Distances using friend function.
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    // Print function
    void print() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Friend function to overload +
    friend Distance operator+(const Distance &d1, const Distance &d2);
};

Distance operator+(const Distance &d1, const Distance &d2) {
    int totalInches = (d1.feet + d2.feet) * 12 + d1.inches + d2.inches;
    int newFeet = totalInches / 12;
    int newInches = totalInches % 12;
    return Distance(newFeet, newInches);
}

int main() {
    Distance d1(5, 8), d2(6, 3);

    cout << "Adding distances:\n";
    d1.print();
    d2.print();

    Distance result = d1 + d2;
    cout << "Resultant Distance:\n";
    result.print();

    return 0;
}
