#include <iostream>
using namespace std;

int main()
{

    double num1, num2, resultado;
    int opcion;

    cout << "ingrese el primer numero" << endl;
    cin >> num1;

    cout << "ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "Seleccione una operacion." << endl
        << "1. suma" << endl
        << "2. Resta" << endl
        << "3. Multiplicacion" << endl
        << "4. Division" << endl
        << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        resultado = num1 + num2;
        cout << "El resultado es: " << resultado << endl;
        break;
    case 2:
        resultado = num1 - num2;
        cout << "El resultado es: " << resultado << endl;
        break;

    case 3:
        resultado = num1 * num2;
        cout << "El resultado es: " << resultado << endl;
        break;

    case 4:
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado es: " << resultado << endl;
        }
        else
        {
            cout << "No se puede dividir entre 0 " << endl;
        }
        break;

    default:
        cout << "Ingrese una opcion valido" << endl;
        break;
    }

    return 0;
}