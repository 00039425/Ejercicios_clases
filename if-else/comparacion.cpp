#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Variables to store the two numbers
    double n1, n2;

    // Variables to store the differences from 100
    int diff1, diff2;

    // Ask the user to enter the first number
    cout << "Enter the first number:" << endl;
    cin >> n1;

    // Calculate the absolute difference from 100
    diff1 = abs(n1 - 100);

    // Ask the user to enter the second number
    cout << "Enter the second number:" << endl;
    cin >> n2;

    // Calculate the absolute difference from 100
    diff2 = abs(n2 - 100);

    // Compare the differences and display the result
    if (diff1 > diff2)
    {
        cout << "The number " << n2 << " is closer to 100." << endl;
    }
    else if (diff2 > diff1)
    {
        cout << "The number " << n1 << " is closer to 100." << endl;
    }
    else
    {
        // If both numbers are equally close to 100
        cout << "Both numbers are at the same distance from 100." << endl;
    }

    return 0;
}
