#include <iostream>
#include <string.h>

struct alumno
{
    char nombre[40];
    int edad;
    float promedio;
};

using namespace std;

alumno llenar();
void imprimir(alumno aux);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    alumno al;
    al = llenar();
    imprimir(al);

    alumno mialumno = {"Carlos Gutierrez", 23, 8.6};

    imprimir(mialumno);

    return 0;
}

alumno llenar()
{
    alumno aux;
    cout << "Dame el nombre del alumno: ";
    cin.getline(aux.nombre, 40);

    cout << "Dame la edad: ";
    cin >> aux.edad;

    cout << "Dame el promedio: ";
    cin >> aux.promedio;

    return aux;
}

void imprimir(alumno aux)
{
    cout << endl;
    cout << "Imprimiendo..." << endl;
    cout << "Nombre: " << aux.nombre << endl;
    cout << "Edad: " << aux.edad << endl;
    cout << "Promedio: " << aux.promedio << endl;
}