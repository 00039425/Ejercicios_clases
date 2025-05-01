#include <iostream>
using namespace std;

int main()
{
    int Day;

    // Ask the user to enter a number between 1 and 7
    cout << "Enter a number from 1 to 7 to know the day of the week:" << endl;

    // Read the number from the user
    cin >> Day;

    // Check the number and display the corresponding day
    if (Day == 1)
    {
        cout << "Number 1 is Monday. Workday." << endl;
    }
    else if (Day == 2)
    {
        cout << "Number 2 is Tuesday. Workday." << endl;
    }
    else if (Day == 3)
    {
        cout << "Number 3 is Wednesday. Workday." << endl;
    }
    else if (Day == 4)
    {
        cout << "Number 4 is Thursday. Workday." << endl;
    }
    else if (Day == 5)
    {
        cout << "Number 5 is Friday. Workday." << endl;
    }
    else if (Day == 6)
    {
        cout << "Number 6 is Saturday. Weekend." << endl;
    }
    else if (Day == 7)
    {
        cout << "Number 7 is Sunday. Weekend." << endl;
    }
    else
    {
        // If the number is not between 1 and 7
        cout << "The number is not in the range." << endl;
    }

    return 0;
}
