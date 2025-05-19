#include <iostream>

using namespace std;

int main()
{
    int N, suma = 0;

    // Se le pide el numero  al usuario
    cout << "Ingrese el numero hasta el que desea sumar los numeros pares: ";
    cin >> N;

    

    // Se produce la suma de los numeros pares
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout << "La suma de los numeros pares hasta " << N << " es: " << suma << endl;

    return 0;
}