#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int vehicle, speed; 

    // Ask the user to choose a vehicle
    cout << "Enter the number that represents your vehicle:" << endl
        << "1. Motorcycle" << endl
        << "2. Kia Soul" << endl
        << "3. 44 Tuned" << endl;
    cin >> vehicle;

    // Check which vehicle was chosen
    if (vehicle == 1)
    {
        // If Motorcycle
        cout << "Enter the speed:" << endl;
        cin >> speed;

        // Check speed for Motorcycle
        if (speed >= 60 && speed < 80)
        {
            cout << "Your fine is $100." << endl;
        }
        else if (speed >= 80)
        {
            cout << "Your fine is $1000." << endl;
        }
        else
        {
            cout << "Speed out of range." << endl;
        }
    }
    else if (vehicle == 2)
    {
        // If Kia Soul
        cout << "Enter the speed:" << endl;
        cin >> speed;

        // Check speed for Kia Soul
        if (speed >= 70 && speed < 90)
        {
            cout << "Your fine is $200." << endl;
        }
        else if (speed >= 90)
        {
            cout << "Your fine is $1111." << endl;
        }
        else
        {
            cout << "Speed out of range." << endl;
        }
    }
    else if (vehicle == 3)
    {
        // If 44 Tuned
        cout << "Enter the speed:" << endl;
        cin >> speed;

        // Check speed for Tuned-up Truck
        if (speed >= 80 && speed < 100)
        {
            cout << "Your fine is $1500." << endl;
        }
        else if (speed >= 100)
        {
            cout << "Your fine is $30000." << endl;
        }
        else
        {
            cout << "Speed out of range." << endl;
        }
    }
    else
    {
        // If the user entered an invalid number
        cout << "Please enter a number from the menu." << endl;
    }
}
