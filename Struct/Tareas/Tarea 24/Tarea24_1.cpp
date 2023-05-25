#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

struct cliente
{
    int cuenta;
    char nombre[50];

    float monto;
};

int main(int argc, char const *argv[])
{
    string resp;
    fstream archivo;
    cout << "Luis David Flores Martinez" << endl;
    archivo.open("clientes.dat", ios::binary | ios ::out | ios::app);

    if (!archivo)
    {
        cerr << "No se puede abrir el archivo" << endl;
        cin.get();
        return 1; /* Termina el programa */
    }
    cliente registro;
    resp = "si";
    while (resp == "si")
    {
        cout << "Dame la cuenta: ";
        cin >> registro.cuenta;

        fflush(stdin);

        cout << "Dame un nombre: ";

        cin.getline(registro.nombre, 50);
        cout << "Dame el monto: ";
        cin >> registro.monto;

        cout << "Grabando el archivo..." << endl;
        cout << registro.cuenta << endl;
        cout << registro.nombre << endl;
        cout << registro.monto << endl;

        archivo.write((char *)(&registro), sizeof(cliente));
        cout << "Deseas ingresar mas datos si/no: ";
        fflush(stdin);
        getline(cin, resp);
    }

    return 0;
}
