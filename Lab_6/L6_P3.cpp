//Practice Exercise 3: Write a program in C++ to Check Whether a Number can be expressed as Sum of Two Prime Numbers using the friend function.
#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;
    else
    {
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
}

class Number
{
    private:
        int num;

        friend void checkSumof2primenum(Number);
    public:
        Number(int n)
        {
            num = n;
        }
};

void checkSumof2primenum(Number obj)
{
    bool found = false;
    cout<<"Checking for number: "<<obj.num<<endl;
    for(int i = 2; i <= obj.num / 2; i++)
    {
        if (isPrime(i) && isPrime(obj.num - i))
        {
            cout << obj.num << " = " << i << " + " << obj.num - i << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << obj.num << " cannot be expressed as the sum of two prime numbers." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number number(num);
    checkSumof2primenum(number);

    return 0;
}
