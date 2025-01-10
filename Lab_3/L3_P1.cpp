//Practice Exercise 1: Write a C++ program to define a class Batsman with the following specifications
#include<iostream>
using namespace std;

class Batsman
{
    private:
        int batsman_ID;
        string batsman_name;

    public:

        static int memberCount;
        Batsman()
        {
            batsman_ID = 2108000 + memberCount + 1;
            memberCount++;
        }
        void getName()
        {
            cout<<"Enter Batsman name: ";
            cin>>batsman_name;
        }
        void showName()
        {
            cout<<"Batsman ID: "<<batsman_ID<<endl;
            cout<<"Batsman name: "<<batsman_name<<endl;
        }
        static int getCount()
        {
            return memberCount;
        }
};

int Batsman::memberCount = 0;

int main()
{
    cout<<"Initially number of objects: "<<Batsman::getCount()<<endl;
    int entries;
    cout<<"Enter the number of entries: ";
    cin>>entries;

    Batsman *batsmen = new Batsman[entries];

    for(int i = 0; i < entries; i++)
    {
        batsmen[i].getName();
    }

    for(int i = 0; i < entries; i++)
    {
        batsmen[i].showName();
    }

    delete[] batsmen;
    return 0;
}
