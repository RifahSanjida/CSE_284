//Practice Exercise 1: Write a C++ Program to display the reverse of a number using the Friend function.
#include<iostream>
using namespace std;

class Number
{
    private:
        int num;

        friend void reverseNum(Number);
    public:
        Number(int n)
        {
            num = n;
        }
};

void reverseNum(Number obj)
{
    int reverse = 0, temp = obj.num;
    while(temp != 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    cout<<"Reversed Number: "<<reverse<<endl;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    Number number(num);
    reverseNum(number);

    return 0;
}
