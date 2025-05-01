#include <iostream>
using namespace std;

//Este es un ejemplo de clase.
int main()
{

    int Res, n;
    cout << "Puedes ingresar un numero, por favor" << endl;
    cin >> n;

    Res = n % 2;

    switch (Res)
    {
    case 1:
        cout << "El numero " << n << " es impar" << endl;
        break;

    case 0:
        cout << "El numero " << n << " es par" << endl;
        break;
    default:
        cout << "Datos incorrectos" << endl;
        break;
    }

    return 0;
}