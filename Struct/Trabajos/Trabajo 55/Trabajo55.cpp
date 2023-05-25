#include <iostream>

using namespace std;

enum figuras
{
    CUADRADO,
    TRIANGULO,
    CIRCULO
};
enum suit
{
    DIAMONDS = 1,
    HEARTS = 2,
    CLUBS = 3,
    SPADES = 4
};

enum
{
    APAGADO,
    ENCENDIDO
};

enum color
{
    ROJO,
    VERDE,
    AZUL,
    AMARILLO
};

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    cout << "APAGADO=" << APAGADO << endl;
    cout << "ENCENDIDO=" << ENCENDIDO << endl;

    cout << "CUADRADO=" << CUADRADO << endl;
    cout << "CLUBS=" << CLUBS << endl;

    figuras fig;
    fig = TRIANGULO;
    cout << "\nfig=" << fig << endl;

    int aux;
    cout << "\n0.-Cuadrado 1.-Triangulo 2.-Circulo: ";
    cin >> aux;
    switch (aux)
    {
    case CUADRADO:
        fig = CUADRADO;
        break;
    case TRIANGULO:
        fig = TRIANGULO;
        break;
    case CIRCULO:
        fig = CIRCULO;
        break;

    default:
        cout << "\nError en la captura" << endl;
        break;
    }

    cout << fig << endl;

    for (int i = CUADRADO; i <= CIRCULO; i++)
    {
        switch (aux)
        {
        case CUADRADO:
            cout << "\nSoy un Cuadrado";
            break;
        case TRIANGULO:
            cout << "\nSoy un Triangulo";
            break;
        case CIRCULO:
            cout << "\nSoy un Circulo";
            break;

        default:
            cout << "\nError en la captura" << endl;
            break;
        }
    }

    cout << endl;

    for (int i = ROJO; i <= AMARILLO; i++)
    {
        aux = i;
        switch (aux)
        {
        case ROJO:
            cout << "\nSoy el color Rojo";
            break;
        case VERDE:
            cout << "\nSoy el color Verde";
            break;
        case AZUL:
            cout << "\nSoy el color Azul";
            break;
        case AMARILLO:
            cout << "\nSoy el color Amarillo";
            break;

        default:
            cout << "\nError en la captura" << endl;
            break;
        }
    }

    return 0;
}
