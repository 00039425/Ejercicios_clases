#include <iostream>
#include <cmath>


using namespace std;

int main(){

double a, b, c,x1, x2, raiz, resta;

cout << "Ingrese el valor de a" << endl;
cin >> a;


cout << "Ingrese el valor de b" << endl;
cin >> b;

cout << "Ingrese el valor de c" << endl;
cin >> c;

resta = (pow( b, 2))-(4*a*c);
raiz = pow(resta, 0.5);

x1 = (-b + raiz) / (2*a);

x2 = (-b - raiz) / (2*a);

    

if(a == 0){
    cout << "La ecuacion no es cuadratica" << endl;
    cout << "El valor de la raiz es " << raiz << endl;
}else{
    
    if(resta < 0){
    cout << "No puede realizarse el calculo debido a que hay raices complejas conjugadas" << endl ;
    }else{
        cout << "Los resultados son " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}

}