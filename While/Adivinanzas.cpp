#include <iostream>

using namespace std;

int main(){
int num = 32, contador = 0, numI = 0;

do
{
    if (contador == 5)
    {
        cout << "Has alcanzado el limite de intentos." << endl;
        break;
    }

    cout << "\nIngresa un numero del 1 al 50: ";
    cin >> numI;

    if (numI == num)
    {
        cout << "Felicidades, adivinaste el numero!" << endl;
        break;
    }else{
        cout << "Intentalo de nuevo." << endl;
        cout << "Numero de intento: " << contador + 1<< endl;
        contador++;
    }
    
} while (contador != 5 || numI != num);


return 0;
}