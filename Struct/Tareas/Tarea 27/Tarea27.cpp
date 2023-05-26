#include <cstdlib>
#include <iostream>
#define TAMNOMBRE 30
#define TAMTEL 15

using namespace std;

struct datos
{
    char nombre[TAMNOMBRE];
    char numtel[TAMTEL];
    int edad;
};

void imprime1(datos aux);
void imprime2(datos *aux);

datos captura1();
datos *captura2();

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    datos misDatos;
    misDatos = captura1();
    imprime1(misDatos);

    datos *tusDatos;
    tusDatos = captura2();
    imprime2(tusDatos);

    delete tusDatos;

    return 0;
}

datos captura1()
{
    datos aux;
    cout << "Dame el nombre: ";
    cin.getline(aux.nombre, TAMNOMBRE);
    cout << "Dame el telefono: ";
    cin.getline(aux.numtel, TAMTEL);
    cout << "Dame la edad: ";
    cin >> aux.edad;
    return aux;
}

void imprime1(datos aux)
{
    cout << "Imprimiendo" << endl;
    cout << aux.nombre << endl;
    cout << aux.numtel << endl;
    cout << aux.edad << endl;
    cout << endl;
}

void imprime2(datos *aux)
{
    cout << "Imprimiendo" << endl;
    cout << aux->nombre << endl;
    cout << aux->numtel << endl;
    cout << aux->edad << endl;
    cout << endl;
}

datos *captura2()
{
    datos *aux;
    aux = new datos;

    fflush(stdin);
    cout << "Dame el nombre: ";
    cin.getline(aux->nombre, TAMNOMBRE);
    fflush(stdin);
    cout << "Dame el telefono: ";
    cin.getline(aux->numtel, TAMTEL);
    fflush(stdin);
    cout << "Dame la edad: ";
    cin >> aux->edad;

    return aux;
}
