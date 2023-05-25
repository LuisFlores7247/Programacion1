#include <iostream>
#define TAM 4

using namespace std;

struct alumno
{
    char nombre[40];
    int edad;
    float promedio;
};

alumno llenar();
void imprimir(alumno aux);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    alumno al[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Alumno #" << i << endl;
        al[i] = llenar();
    }
    cout << "Imprimiendo el vector..." << endl;
    for (int i = 0; i < TAM; i++)
    {
        imprimir(al[i]);
    }

    return 0;
}

alumno llenar()
{
    alumno aux;

    cout << "Dame el nombre del alumno: ";
    fflush(stdin);
    cin.getline(aux.nombre, 40);
    cout << "Dame la edad: ";
    cin >> aux.edad;
    cout << "Dame el promedio: ";
    cin >> aux.promedio;

    return aux;
}

void imprimir(alumno aux)
{
    cout << "Nombre: " << aux.nombre << endl;
    cout << "Edad: " << aux.edad << endl;
    cout << "Promedio: " << aux.promedio << endl;
}