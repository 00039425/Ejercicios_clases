#include <iostream>
using namespace std;

int main()
{
    // Declare the variable that will be used
    int Day;

    // Ask the user for a number
    cout << "Please enter a number from 1 to 7" << endl;
    cin >> Day;

    // Use switch to check the number the user entered
    switch (Day)
    {
    case 1:
        cout << "The number " << Day << " means Monday" << endl;
        break;

    case 2:
        cout << "The number " << Day << " means Tuesday" << endl;
        break;

    case 3:
        cout << "The number " << Day << " means Wednesday" << endl;
        break;

    case 4:
        cout << "The number " << Day << " means Thursday" << endl;
        break;

    case 5:
        cout << "The number " << Day << " means Friday" << endl;
        break;

    case 6:
        cout << "The number " << Day << " means Saturday" << endl;
        break;

    case 7:
        cout << "The number " << Day << " means Sunday" << endl;
        break;

    // If the user does not enter a valid number, show this message
    default:
        cout << "Please enter a valid option";
        break;
    }
}
