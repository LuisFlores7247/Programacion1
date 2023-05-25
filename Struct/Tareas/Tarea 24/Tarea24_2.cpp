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
    fstream archivo;
    cout << "Luis David Flores Martinez" << endl;
    archivo.open("clientes.dat", ios::binary | ios::in);

    if (!archivo)
    {
        cerr << "No se puede abrir el archivo" << endl;
        cin.get();
        return 1; /* Termina el programa */
    }
    cliente registro;
    int c = 0;
    cout << "La informaci\242n es rescatada desde el archivo";
    while (archivo.read((char *)(&registro), sizeof(cliente)))
    {
        cout << endl;
        cout << "Cuenta: " << registro.cuenta << endl;
        cout << "Nombre: " << registro.nombre << endl;
        cout << "Monto: " << registro.monto << endl;
        c++;
    }
    cout << "Total de registros: " << c;

    return 0;
}
