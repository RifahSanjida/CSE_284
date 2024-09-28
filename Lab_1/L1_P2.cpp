//Practice Exercise 2:Write a C++ Program to define a class batsman with the following specifications:
#include<iostream>
using namespace std;
class Batsman
{
    private:
        int batsmanCode;
        char batsmanName[21];
        int totalInnings, notoutInnings, totalRuns;
        double bettingAvg;

        void calcAvg()
        {
            if((totalInnings - notoutInnings)>0)
            {
                bettingAvg = (totalRuns) / (totalInnings - notoutInnings);
            }
            else
            {
                bettingAvg = 0.0;
            }
        }

    public:
        void readData()
        {
            cout<<"Enter batsman code(4 digits): "<<endl;
            cin>>batsmanCode;
            cout<<"Enter batsman name: "<<endl;
            cin>>batsmanName;
            cout<<"Enter total innings: "<<endl;
            cin>>totalInnings;
            cout<<"Enter notout innings: "<<endl;
            cin>>notoutInnings;
            cout<<"Enter total runs: "<<endl;
            cin>>totalRuns;

            calcAvg();
        }
        void displayData()
        {
            cout<<"Batsman Code: "<<batsmanCode<<endl;
            cout<<"Batsman Name: "<<batsmanName<<endl;
            cout<<"Total Innings: "<<totalInnings<<endl;
            cout<<"Notout Innings: "<<notoutInnings<<endl;
            cout<<"Total Runs: "<<totalRuns<<endl;
            cout<<"Betting Average: "<<bettingAvg<<endl;
        }
};

int main()
{
    Batsman batsman;

    batsman.readData();
    batsman.displayData();

    return 0;
}
