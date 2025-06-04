#include <iostream>

using namespace std;

int main()
{
    // The variables to use are declared
    int NFibonacci = 0, n1 = 1, n2 = 1, next;

    // The user is asked for the maximum number of terms
    cout << "Enter the number of terms of the Fibonacci series you want to see: ";
    cin >> NFibonacci;

    // It is validated that the number entered by the user is greater than 0.
    if (NFibonacci <= 0)
    {
        cout << "Enter a positive number. " << endl;
    }
    else
    {
        for (int i = 0; i < NFibonacci; i++)
        {
            // The Fibonacci series is calculated starting with its first two values (1 and 1)
            cout << n1 << " ";
            next = n1 + n2;
            n1 = n2;
            n2 = next;
        }
    }

    return 0;
}
