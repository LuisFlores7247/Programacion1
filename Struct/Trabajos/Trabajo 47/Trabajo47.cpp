#include <iostream>
#include <string.h>

using namespace std;

struct dispositivo
{
    char tipo[30];
    float precio;
    int existencia;
};

void imprimir(dispositivo);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    dispositivo dis1 = {"laptop", 18000, 13};
    dispositivo dis2, dis3;
    cout << "Imprimiendo el contenido de dis1: ";
    imprimir(dis1);
    dis2 = dis1;
    cout << "Imprimiendo el contenido de dis2: ";
    imprimir(dis2);

    cout << "Imprimiendo el contenido de un arreglo de estructuras: ";
    dispositivo d[3] = {{"laptop", 18000, 13}, {"mouse", 600, 20}, {"impresora", 1600, 8}};
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        imprimir(d[i]);
    }

    dis3 = d[2];
    cout << "Imprimiendo el contenido de dis3: ";
    imprimir(dis3);

    dispositivo dis4 = {"tableta", 15000, 4};
    d[0] = dis4;

    cout << "Imprimiendo el arreglo en su posicion 0: ";
    imprimir(d[0]);

    char tipod[30];
    float precio;
    int existencia;

    strcpy(tipod, dis3.tipo);
    precio = dis3.precio;
    existencia = dis3.existencia;

    cout << "Imprimiendo las variables donde pasamos los datos del struct: ";
    cout << tipod << " " << precio << " " << existencia;
    return 0;
}

void imprimir(dispositivo aux)
{
    cout << aux.tipo << " " << aux.precio << " " << aux.existencia << endl;
}