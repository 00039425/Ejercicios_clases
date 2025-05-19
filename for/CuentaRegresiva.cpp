#include <iostream>

using namespace std;

int main(){
    //Se declaran las variables a usar
    int N;

    //Se le pide el numero  al usuario
    cout<< "Ingrese un numero para inicir la cuenta regresiva, por favor: ";
    cin >> N;

    cout << "\n---Cuenta regresiva---" << endl;

    //Se produce la cuenta regresiva
    for (int i = N; i >= 0; i--)
    {
        //Se imprime la cuenta regresiva del 10 al 0
        
        cout << i << endl;
    }
    

    return 0;
}