#include <iostream>

using namespace std;

int main(){
int Pass = 123456, Pass1;


    do
    {
        cout << "Ingrese su clave para ingresar" << endl;
        cin >> Pass1;
    } while (Pass != Pass1);

    cout << "\nBienvenido!!!";

    return 0;
}