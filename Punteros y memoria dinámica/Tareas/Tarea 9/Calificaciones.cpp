// Tarea 9 progra I, Practica de punteros ejercicio 3, programa que recibe tres calificaciones y saca promedio
// 02/03/2023
// Sergio Eder Cervantes Rincon

#include <iostream>
#include <cstdlib>

using namespace std;
void promedio(float c1, float c2, float c3);

int main()
{
    float c1, c2, c3;
    cout << endl << "Luis David Flores Martinez";
    cout << endl << "Dame la primera calificacion: ";
    cin >> c1;
    cout << endl << "Dame la segunda calificacion: ";
    cin >> c2;
    cout << endl << "Dame la tercera calificacion: ";
    cin >> c3;
    promedio(c1, c2, c3);
    cout << endl;
    return 0;
}
void promedio(float c1, float c2, float c3)
{
    float prom;
    prom = (c1 + c2 + c3) / 3;
    if (prom >= 7)
    {
        cout << endl << "Aprobaste, tu calificacion es: " << prom;
    }
    else
    {
        cout << endl << "Reprobaste, tu calificacion es: " << prom;
    }
}