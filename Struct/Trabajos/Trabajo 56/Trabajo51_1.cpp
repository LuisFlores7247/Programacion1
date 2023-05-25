#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

enum operacion
{
    SUMAR,
    RESTAR,
    MULTIPLICAR,
    DIVIDIR
};

int operar(int v1, int v2, operacion op);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    int valor1, valor2;
    cout << "Dame el valor 1: ";
    cin >> valor1;
    cout << "Dame el valor 2: ";
    cin >> valor2;
    cout << "La suma de " << valor1 << " y " << valor2 << " es " << operar(valor1, valor2, SUMAR) << endl;
    cout << "La resta de " << valor1 << " y " << valor2 << " es " << operar(valor1, valor2, RESTAR) << endl;
    cout << "La multiplicacion de " << valor1 << " y " << valor2 << " es " << operar(valor1, valor2, MULTIPLICAR) << endl;
    cout << "La division de " << valor1 << " y " << valor2 << " es " << operar(valor1, valor2, DIVIDIR) << endl;

    return 0;
}

int operar(int v1, int v2, operacion op)
{
    switch (op)
    {
    case SUMAR:
        return v1 + v2;
        break;
    case RESTAR:
        return v1 - v2;
        break;
    case MULTIPLICAR:
        return v1 * v2;
        break;
    case DIVIDIR:
        return v1 / v2;
        break;

    default:
        break;
    }
}