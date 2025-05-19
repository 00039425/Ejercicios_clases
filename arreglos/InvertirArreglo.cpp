#include <iostream>

using namespace std;

int main(){
    // The values that the array will store are declared
    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "Array content: " << endl;

    // The array numbers are reversed to print them
    for (int i = 4; i >= 0; i--)
    {
        cout << "Element at position " << i << ": " << numbers[i] << endl;
    }

    return 0;
}
