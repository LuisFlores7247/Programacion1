#include <iostream>
#define TAM 4

using namespace std;

struct alumno
{
    char nombre[45];
    int edad;
    float promedio;
};

void llenar(alumno[]);
void imprimir(alumno[]);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    alumno arreglo[TAM];

    llenar(arreglo);
    imprimir(arreglo);
    return 0;
}

void llenar(alumno arreglo[TAM])
{
    cout << "Llenando el arreglo de estructuras" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "Dame el nombre del alumno " << i + 1 << ": ";
        fflush(stdin);
        cin.getline(arreglo[i].nombre, 40);
        cout << "Dame la edad: ";
        cin >> arreglo[i].edad;
        cout << "Dame el promedio: ";
        cin >> arreglo[i].promedio;
    }
}

void imprimir(alumno arreglo[])
{
    cout << "Imprimiendo el arreglo de estructuras" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "Nombre: " << arreglo[i].nombre << endl;
        cout << "Edad: " << arreglo[i].edad << endl;
        cout << "Promedio: " << arreglo[i].promedio << endl;
    }
}