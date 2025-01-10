//Practice Exercise 2: Write a C++ program to Overloaded − operator to subtract two complex number.
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Print function
    void print() {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else
            cout << real << "+" << imag << "i" << endl;
    }

    // Overload - operator
    Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }
};

int main() {
    Complex c1(5.5, 4.3), c2(2.2, 3.1);

    cout << "Subtracting complex numbers:\n";
    c1.print();
    c2.print();

    Complex result = c1 - c2;
    cout << "Resultant Complex Number:\n";
    result.print();

    return 0;
}
