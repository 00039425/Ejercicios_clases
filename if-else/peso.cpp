#include <iostream>
using namespace std;

int main()
{
    int Weight;

    // Ask the user to enter the weight of the package
    cout << "Enter the weight of your package:" << endl;
    cin >> Weight; // Read the weight

    // Check the weight and show the cost
    if (Weight >= 0 && Weight <= 5)
    {
        cout << "You have to pay 5 dollars." << endl;
    }
    else if (Weight >= 6 && Weight <= 10)
    {
        cout << "You have to pay 10 dollars." << endl;
    }
    else if (Weight > 10)
    {
        cout << "You have to pay 15 dollars." << endl;
    }
    else
    {
        // If the weight entered is not valid (like negative numbers)
        cout << "The weight you entered is not in the valid range." << endl;
    }

    return 0;
}
