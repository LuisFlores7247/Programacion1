#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Luis David Flores Martinez";
    string nombre1, copia;
    string nombre2 = "Daphne Lozano";
    cout << endl << "Dame un nombre: ";
    getline(cin, nombre1); // captura todo lo que ingreses
    // cin >> nombre1; // Captura solo una palabra que teclees
    cout << endl << "Nombre1: " << nombre1;

    // El tipo string te permite una comparacion con el ==
    cout << endl;
    if (nombre1 == nombre2){
        cout << endl << nombre1 << " es igual " << nombre2;
    }else{
        cout << endl << nombre1 << " NO es igual " << nombre2;
    }

    //  El tipo string te permite una asignacion directa
    cout << endl;
    copia  = nombre1;
    cout << endl << "Copia: " << copia;

    // El tipo string te permite concatenar directo;
    cout << endl;

    nombre1 = nombre1 + " Bienvenid@";
    cout << endl << "Nombre: " << nombre1;

    // Forma de recorrer un string
    // Imprimiendo letra por letra

    cout << endl << "Imprimiendo letra por letra un string: ";

    for (int i = 0; i < nombre2.size(); i++)
    {
        cout << nombre2[i] << " - ";
    }
}   