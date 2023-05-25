#include <fstream>
#include <iostream>
#include <windows.h>

using namespace std;

void guardar(fstream &archivo);
void leer();

int main(int argc, char const *argv[])
{
    cout<<"Luis David Flores Matinez"<<endl;
    fstream archivo;
    char nomarch[30] = "jugadores.txt";
    archivo.open(nomarch, ios::out | ios::app);

    int n, opc;
    char resp = 's';
    if (!archivo)
    {
        cout << "No se pudo leer el archivo o no existe";
    }
    else
    {
        while (resp == 's')
        {
            cout << "MENU\n1.- Guardar\n2.- Leer\n3.- Salir\nOpcion: ";
            cin>>opc;
            switch (opc)
            {
            case 1:
                cout << "Ingrese el numero de jugadores a guardar: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    guardar(archivo);
                }
                break;
            case 2:
                leer();
                break;
            case 3:
                archivo.close();
                resp = 'n';
                break;
            default:
                cout << "Valor erroneo";
                break;
            }
            cout<<"Deseas repetir? s/n: ";
            cin>>resp;
        }
    }
    return 0;
}

void guardar(fstream &archivo)
{
    char nombre[100], equipo[100];
    int edad;
    cout<<endl;
    fflush(stdin);
    cout << "Ingrese el nombre: ";
    cin.getline(nombre, sizeof(nombre));
    cout << "Ingrese el equipo: ";
    cin.getline(equipo, sizeof(equipo));
    cout << "Ingrese la edad: ";
    cin>>edad;
    archivo << nombre << " " << equipo << " " << " " << edad << endl;
}

void leer()
{
    fstream archivo;
    archivo.open("jugadores.txt",ios::in);
    char linea[100];
    cout << "\nNOMBRES GUARDADOS\n";
    while (archivo.getline(linea, 100))
    {
        cout << linea << endl;
    }
    archivo.close();
}