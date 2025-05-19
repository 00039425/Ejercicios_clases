#include <iostream>

using namespace std;

int main()
{
    // The array and variables to use are declared
    int numbers[5] = {2, 4, 6, 10, 14};
    int n = 0, result = 0;

    // A even number is asked from the user
    cout << "Enter an even number: ";
    cin >> n;

    // The array is checked to look for matches
    for (int i = 0; i <= 5; i++)
    {
        // If a number in the array is the same as the number entered, that value is saved in 'result'
        if (numbers[i] == n)
        {
            result = n;
        }
    }

    // Depending on the condition, one message or another is shown
    if (result == n)
    {
        cout << "The number you entered (" << result << ") is in the array" << endl;
    }
    else
    {
        cout << "The number you entered (" << n << ") is not in the array" << endl;
    }
    return 0;
}
