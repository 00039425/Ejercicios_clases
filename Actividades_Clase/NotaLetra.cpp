#include <iostream>

using namespace std;

int main()
{
    int Grade;     // Variable to save the number grade
    char Letter;   // Variable to save the letter grade

    cout << "Enter your grade (0 to 100)" << endl;
    cin >> Grade;  // Ask the user for the grade

    // Convert the number grade to a letter grade
    if (Grade<100 && Grade >= 90)
    {
        Letter = 'A';
    }
    else if (Grade < 90 && Grade >= 85)
    {
        Letter = 'B';
    }
    else if (Grade < 85 && Grade >= 80)
    {
        Letter = 'C';
    }
    else if (Grade < 80 && Grade >= 70)
    {
        Letter = 'D';
    }
    else if (Grade < 70 && Grade >= 69) // Only for 69
    {
        Letter = 'E';
    }
    else if (Grade < 69 && Grade >= 0)
    {
        Letter = 'F';
    }
    else
    {
        cout << "Invalid grade" << endl;
        
    }

    // Show a message for each letter grade
    switch (Letter)
    {
    case 'A':
        cout << "Congratulations, you are one of the best";
        break;
    case 'B':
        cout << "Congratulations, you passed with a good grade";
        break;
    case 'C':
        cout << "Congratulations, you did well";
        break;
    case 'D':
        cout << "Congratulations, you passed";
        break;
    case 'E':
        cout << "You passed, but you can do better";
        break;
    case 'F':
        cout << "Your grade is not good. Try harder";
        break;
    default:
        cout << "Invalid data" << endl;
        break;
    }

    return 0;
}
