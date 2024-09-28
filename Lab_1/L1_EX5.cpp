//Example 5: Write a C++ program with class to make a cgpa calculator.
#include<iostream>
using namespace std;

class CGPA
{
    private:
        double sub1, sub2, sub3, crd1, crd2, crd3;
    public:
        double initData(double a, double b, double c, double d, double e, double f)
        {
            sub1 = a;
            sub2 = b;
            sub2 = c;
            crd1 = d;
            crd2 = e;
            crd3 = f;
        }
        double calculateCGPA()
        {
            double cg = ((sub1*crd1)+(sub2*crd2)+(sub3*crd3))/(crd1+crd2+crd3);
            return cg;
        }

};
int main()
{
    CGPA cgpa1;
    cgpa1.initData(4.5, 5, 4.0, 1.25, 4, 0.75);
    cout<<"CGPA: "<<cgpa1.calculateCGPA()<<endl;
    return 0;
}
