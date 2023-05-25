#define NOMBRE_ARCHIVO "datos.txt"

#include <iostream>
#include <fstream>

using namespace std;

void llenar(fstream &file);
void leer(fstream &file);
void eliminar(fstream &file);

int main(int argc, char const *argv[])
{
    fstream file;
    int op;
    cout << "Luis David Flores Martinez" << endl;
    do
    {
        cout << "\nMENU\n1.-Llenar\n2.-Eliminar\n3.-Mostrar\n4.-Salir\nOpcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
            llenar(file);
            break;
        case 2:
            eliminar(file);
            break;
        case 3:
            leer(file);
            break;
        case 4:
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }

    } while (op != 4);

    return 0;
}

void llenar(fstream &file)
{
    file.open(NOMBRE_ARCHIVO, ios::out | ios::app);
    int ID, sueldo;
    string nombre, puesto;
    char resp = 's';

    while (resp == 's')
    {
        cout << "Ingrese el ID: ";
        cin >> ID;
        cout << "Ingrese el nombre: ";
        fflush(stdin);
        getline(cin, nombre);
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
        cout << "Ingrese el puesto: ";
        fflush(stdin);
        getline(cin, puesto);

        for (int i = 0; i < nombre.size(); i++)
        {
            if (nombre[i] == ' ')
            {
                nombre[i] = '_';
            }
        }
        for (int i = 0; i < puesto.size(); i++)
        {
            if (puesto[i] == ' ')
            {
                puesto[i] = '_';
            }
        }
        file << ID << " " << nombre << " " << sueldo << " " << puesto << endl;
        cout << "Deseas agregar otro trabajador? s/n: ";
        resp = getchar();
    }
    file.close();
}

void leer(fstream &file)
{
    file.open(NOMBRE_ARCHIVO, ios::in);
    string nombre, puesto, ID, sueldo;
    file.clear();
    file.seekg(0);
    while (file >> ID >> nombre >> sueldo >> puesto)
    {
        cout << ID << " ";
        for (int i = 0; i < nombre.size(); i++)
        {
            if (nombre[i] == '_')
            {
                cout << " ";
            }
            else
            {
                cout << nombre[i];
            }
        }
        cout << " " << sueldo << " ";
        for (int i = 0; i < puesto.size(); i++)
        {
            if (puesto[i] == '_')
            {
                cout << " ";
            }
            else
            {
                cout << puesto[i];
            }
        }
        cout << endl;
    }
    file.close();
}

void eliminar(fstream &file)
{
    fstream temp;
    file.open(NOMBRE_ARCHIVO, ios::in);
    temp.open("temp.txt", ios::out);

    bool flag = false;
    int ID, sueldo, aux;
    string nombre, puesto;
    char resp;

    cout << "Ingrese el ID a eliminar: ";
    cin >> aux;

    while (file >> ID >> nombre >> sueldo >> puesto)
        {
            if (aux == ID)
            {
                cout << ID << " ";
        for (int i = 0; i < nombre.size(); i++)
        {
            if (nombre[i] == '_')
            {
                cout << " ";
            }
            else
            {
                cout << nombre[i];
            }
        }
        cout << " " << sueldo << " ";
        for (int i = 0; i < puesto.size(); i++)
        {
            if (puesto[i] == '_')
            {
                cout << " ";
            }
            else
            {
                cout << puesto[i];
            }
        }
            }
            
        }

    cout<<endl<<endl<<"Deseas eliminar? (s/n): ";
    fflush(stdin);
    cin >> resp;

    if (resp == 's')
    {

        while (file >> ID >> nombre >> sueldo >> puesto)
        {
            if (aux != ID)
            {
                temp << ID << " " << nombre << " " << sueldo << " " << puesto << endl;
            }
            else
            {
                flag = true;
            }
        }
    }
    if (!flag)
    {
        cout << "ID no encontrado" << endl;
    }
    else
    {
        cout << "Se ha eliminado correctamente" << endl;
    }
    temp.close();
    file.close();
    system("del datos.txt");
    system("ren temp.txt datos.txt");
}