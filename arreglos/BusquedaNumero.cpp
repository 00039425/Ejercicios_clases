#include <iostream>

using namespace std;

int main()
{
    int numeros[5] = {2, 4, 6, 10, 14};
    int n = 0, resultado = 0;

    cout << "Ingrese un numero par: ";
    cin >> n;
    for (int i = 0; i <= 5; i++)
    {
        if (numeros[i] == n)
        {
            resultado = n;
        }
    }

    if (resultado == n)
    {
        cout << "El numero que usted digito (" << resultado << ") se encuentra dentro del arreglo" << endl;
    }
    else
    {
        cout << "El numero que usted digito (" << n << ") no se encuentra dentro del arreglo" << endl;
    }
    return 0;
}