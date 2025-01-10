//Practice Exercise 2: Write a C++ Program to define a class Car with the following specifications:
//Private members:
//car name, model name, fuel type: string type
//mileage: float type
//price: double type
//Public members:
//displaydata(): Function to display the data members on the screen.
//Use Constructor (both Default and parameterized) and destructor. When no
//parameter is passed the default constructor will be called with the message ”De-
//fault constructor has been called”.

#include<iostream>
using namespace std;

class CAR
{
    private:
        string car_name, model_name, fuel_name;
        float mileage;
        double price;

    public:
        //default
        CAR()
        {
            car_name = "Chevrolet";
            model_name = "Impala sixty seven";
            fuel_name = "Octane gas";
            mileage = 13.9;
            price = 10495.70;
            cout<<"Default constructor has been called."<<endl;
        }
        //parameterized
        CAR(string cName, string mName, string fName, float mil, double pr)
        {
            car_name = cName;
            model_name = mName;
            fuel_name = fName;
            mileage = mil;
            price = pr;
            cout<<"Parameterized constructor has been called."<<endl;
        }
        //destructor
        ~CAR()
        {
            cout<<"Destructor has been called for "<<car_name<<endl;
        }

        void displayData()
        {
            cout<<"Car name: "<<car_name<<endl;
            cout<<"Model name: "<<model_name<<endl;
            cout<<"Fuel name: "<<fuel_name<<endl;
            cout<<"Mileage: "<<mileage<<" MPG "<<endl;
            cout<<"Price:$ "<<price<<endl;
        }
};

int main()
{
    CAR car1;
    car1.displayData();
    cout<<endl;

    CAR car2("Bentley", "Eight", "Gas", 71.3, 11163.38);
    car2.displayData();
    cout<<endl;

    return 0;
}

