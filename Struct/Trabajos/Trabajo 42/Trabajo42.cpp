#include <iostream>
#include <string>
using namespace std;

struct alumno
{
    char nombre[40];
    int edad;
    float promedio;
};

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    alumno al;

    cout << "Dame el nombre del alumno: ";
    cin.getline(al.nombre, 40);
    cout << "Dame la edad: ";
    cin >> al.edad;
    cout << "Dame el promedio: ";
    cin >> al.promedio;

    cout << "Imprimiendo..." << endl;
    cout << "Nombre: " << al.nombre << endl;
    cout << "Edad: " << al.edad << endl;
    cout << "Promedio: " << al.promedio << endl;

    return 0;
}
