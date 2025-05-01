#include <iostream>
using namespace std;

int main()
{
    //se declaran variables
    float dolar, conversion;
    int opt;


     //Se le pide al usuario que ingreese la conversion
    cout << "Seleccione una operacion." << endl
         << "1. dolar -> Real brasileño" << endl
         << "2. dolar -> Euro" << endl
         << "3. dolar -> JPY" << endl
         << "Opcion: ";
    cin >> opt;

    cout << "Ingrese la cantidad de dolares a convertir" << endl;
    cin >> dolar;

    //se maneja la opcion que selecciono y se realiza la operacion
    switch (opt)
    {
    case 1:
        conversion = dolar * 5.66;
        cout << dolar << "  dolares equivalen a " << conversion << " Reales brasileños";
        break;

    case 2:
        conversion = dolar * 0.88;
        cout << dolar << "  dolares equivalen a " << conversion << " Eauros";
        break;

    case 3:
        conversion = dolar * 142.90;
        cout << dolar << "  dolares equivalen a " << conversion << " Yenes japoneses";
        break;

        //Si selecciona una opcion invalida se le muestra este mensaje
    default:
        cout << "Ingrese una opcion valida";
        break;
    }
}