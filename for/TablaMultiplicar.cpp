#include <iostream>

using namespace std;

int main(){
    //Variables a usar
    int N, resultado = 0;

    //Se le pide el numero  al usuario
    cout << "Ingrese el numero del que desa la tabla de multiplicar: ";
    cin >> N;

    for (int i = 0; i <= 10; i++)
    {
        //Se hace la operacion hasta que el bucle del for se cumpla
        resultado = N * i;
        cout << N << " X " << i << " = " << resultado << endl;
    }
    
    
    return 0;
}