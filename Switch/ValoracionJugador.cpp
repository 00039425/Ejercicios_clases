#include <iostream>
using namespace std;

int main()
{
    // Declare the variable that will be used
    int opt;

    //Se le pide al usuario que ingrese la puntuacion
    cout << "Ingrese el puntaje " << endl
         << "1. 1 estrella" << endl
         << "2. 2 estrellas" << endl
         << "3. 3 estrellas" << endl
         << "4. 4 estrellas" << endl
         << "5. 5 estrellas" << endl
         << "Opcion: ";
    cin >> opt;

    //Se maneja la opcion que el usuario elija y se muestra el mensaje correspondiente
    switch (opt)
    {
    case 1:
        cout << "El desempeño es lamentable." << endl;
        break;

    case 2:
        cout << "El desempeño es malo." << endl;
        break;

    case 3:
        cout << "El desempeño es promedio." << endl;
        break;

    case 4:
        cout << "El desempeño es bueno." << endl;
        break;

    case 5:
        cout << "El desempeño es excelente." << endl;
        break;

        //Si selecciona una opcion invalida se le muestra este mensaje
    default:
        cout << "Ingrese una opcion valida";
        break;
    }
}