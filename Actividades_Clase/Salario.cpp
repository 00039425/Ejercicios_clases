#include <iostream>

using namespace std;

int main()
{
    //Variables a utilizar en el programa
    double salarioBruto = 0, salarioNeto = 0, renta = 0, afp = 0, isss = 0;
    int opcion;

    //Se pide al usuario que ingrese el salario bruto mensual
    cout << "Por favor, ingrese su salario bruto mensual: ";
    cin >> salarioBruto;

    //Si el salario bruto ingresado es menor a 0 se muestra este mensaje de error 
    if (salarioBruto < 0)
    {
        cout << "Ingrese un salario bruto valido";
    }
    //Sino, se pasa a calcular los descuentos y el valor del salario neto mensual.
    else
    {
        isss = salarioBruto * 0.03;

        //Se calcula el valor del ISSS a descontar
        if (isss > 30.00)
        {
            isss = 30.00;
        }

        //Se calcula el valor del AFP a descontar
        afp = salarioBruto * 0.0725;

        //Se calcula el valor del salario neto para pasar a calcular el ISR a descontar
        salarioNeto = salarioBruto - (isss + afp);

        if (salarioNeto > 0 && salarioNeto <= 472.00)
        {
            cout << "usted esta excento del ISR";
        }
        else if (salarioNeto >= 472.01 && salarioNeto <= 895.24)
        {
            renta = salarioNeto * 0.10;

            salarioNeto -= renta;
        }
        else if (salarioNeto >= 895.25 && salarioNeto <= 2038.10)
        {
            renta = salarioNeto * 0.20;

            salarioNeto -= renta;
        }
        else if (salarioNeto > 2038.10)
        {
            renta = salarioNeto * 0.30;

            salarioNeto -= renta;
        }
        else
        {
            cout << "Ingrese un dato valido" << endl;
        }

        //Se le pide al usuario que eliga la opcion que desea realizar
        cout << "\n Escoja la opcion que desea calcular." << endl;

        cout << "1. ISSS" << endl
             << "2. AFP" << endl
             << "3. Renta" << endl
             << "4. Total" << endl
             << "5. Salir" << endl;
        cin >> opcion;

        //Se muestran los mensajes dependiendo de lo que el usuario haya elegido en el menu
        switch (opcion)
        {
        case 1:
            cout << "El monto que se descuenta en concepto de ISSS es: $" << isss << endl;
            break;

        case 2:
            cout << "El monto que se descuenta en concepto de AFP es: $" << afp << endl;
            break;

        case 3:
            cout << "El monto que se descuenta en concepto de ISR es: $" << renta << endl;
            break;

        case 4:
            cout << "ISSS: $" << isss << endl;
            cout << "AFP: $" << afp << endl;
            cout << "Salario - ISSS Y AFP: $" << salarioBruto - (isss + afp) << endl;
            cout << "Renta: $" << renta << endl;
            cout << "Su salario neto mensual es de: $" << salarioNeto << endl;
            break;

        case 5:
            cout << "Hasta pronto!." << endl;
            break;
        default:
            cout << "Ingrese una opcion valida";
        }
    }

    return 0;
}