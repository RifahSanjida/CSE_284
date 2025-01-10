//Practice Exercise 2: Write a C++ program to find the number and sum of all integer between 100 and 200 which are divisible by 11 with friend function.
#include<iostream>
using namespace std;

class Range
{
    private:
        int start, finish;

        friend void findDivisibleBy11(Range);
    public:
        Range(int s, int f)
        {
            start = s;
            finish = f;
        }
};

void findDivisibleBy11(Range obj)
{
    int sum = 0;
    cout<<"Numbers divisible by 11 between "<<obj.start <<" and "<<obj.finish<<" : "<<endl;
    for(int i = obj.start; i <= obj.finish; i++)
    {
        if(i % 11 == 0)
        {
            cout<<i<<endl;
            sum +=i;
        }
    }
    cout << "\nSum of these numbers: " << sum << endl;
}

int main()
{
    Range range(100, 200);
    findDivisibleBy11(range);

    return 0;
}
