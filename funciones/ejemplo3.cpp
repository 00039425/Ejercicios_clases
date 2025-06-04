#include <iostream>
using namespace std;

// Función que devuelve el mayor de tres números
int mayorDeTres(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

bool esPar(int n)
{
    return n % 2 == 0;
}

int main()
{
    int a = 3, b = 12, c = 5;
    cout << "El mayor de los tres es: " << mayorDeTres(a, b, c) << endl;

    if (esPar(mayorDeTres(a, b, c)))
    {
        cout << "El numero mayor de los tres es par" << endl;
    }
    else
    {
        cout << "El numero mayor de los tres es impar" << endl;
    }

    return 0;
}