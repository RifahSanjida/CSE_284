//Practice Exercise 2: Write a C++ program to calculate the percentage of a student. Accept the
//marks of five subjects (Physics, Chemistry, Math, Biology, and English) in base
//class. A class will derived from the base class which includes a function to find
//the total marks obtained and another class derived from this first derived class
//which calculates and displays the percentage of student.

#include<iostream>
using namespace std;

class Student
{
    protected:
        int marks[5];
    public:
        void getMarks()
        {
            cout<<"Enter marks for Physics, Chemistry, Math, Biology, and English: "<<endl;
            for(int i = 0; i < 5; i++)
            {
                cin>>marks[i];
            }
        }
};

class TotalMarks: public Student
{
    protected:
        int total;
    public:
        void calculateTotal()
        {
            total = 0;
            for(int i = 0; i < 5; i++)
            {
                total += marks[i];
            }
            cout<<"Total marks: "<<total<<endl;
        }
};

class Percentage: public TotalMarks
{
    public:
        void calculatePercentage()
        {
            float percentage = (total/5.0);
            cout<<"Percentage: "<<percentage<<"%"<<endl;
        }
};

int main()
{
    Percentage student;
    student.getMarks();
    student.calculateTotal();
    student.calculatePercentage();
    return 0;
}
