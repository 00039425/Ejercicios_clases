#include <iostream>

using namespace std;

int main(){
    int numeros[5];

    cout << "Ingrese 5 numeros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostrar los números ingresados
    cout << "Numeros ingresados:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": " << numeros[i] << endl;
    }


    return 0;
}