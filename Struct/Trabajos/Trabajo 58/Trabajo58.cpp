#include <iostream>
#include <time.h>
#include <cstring>

#define TAM 4

using namespace std;

enum Tipo
{
    ALUMNOS = 1,
    MAESTROS,
    SECRETARIOS
};

union Datos
{
    float salario;
    float promedio;
    float compensaciones;
};

struct Escuela
{
    char nombre[30];
    char direccion[40];
    char telefono[11];
    Datos aux;
    Tipo tp;
};

void llenarAleatorios(Escuela morelos[TAM]);
void imprimir(Escuela morelos[TAM]);

int main(int argc, char const *argv[])
{
    srand(time(0));
    Escuela morelos[TAM];

    imprimir(morelos);
    llenarAleatorios(morelos);
    imprimir(morelos);
    return 0;
}
void llenardatos(Escuela morelos[TAM])
{
    int per = 0;
    cout << "Llenando los datos del arreglo..." << endl;
    for (int i = 0; i < TAM; i++)
    {
        do
        {
            cout << "Que deseas llenar?" << endl;
            cout << "1.- Alumno" << endl;
            cout << "2.- Maestro" << endl;
            cout << "3.- Secretario" << endl;
            cout << "Opcion:";
            cin >> per;
        } while (per < 1 || per > 3);
        cout << "Ingresa el nombre: ";
        fflush(stdin);
        cin.getline(morelos[i].nombre, 30);
        cout << "Ingresa la direccion: ";
        fflush(stdin);
        cin.getline(morelos[i].direccion, 30);
        cout << "Ingresa el telefono: ";
        fflush(stdin);
        cin.getline(morelos[i].telefono, 30);

        switch (per)
        {
        case ALUMNOS:
            cout << "Ingresa el promedio: ";
            cin >> morelos[i].aux.promedio;
            morelos[i].tp = ALUMNOS;
            break;
        case MAESTROS:
            cout << "Ingresa el salario: ";
            cin >> morelos[i].aux.salario;
            morelos[i].tp = MAESTROS;
            break;
        case SECRETARIOS:
            cout << "Ingresa la compensacion: ";
            cin >> morelos[i].aux.compensaciones;
            morelos[i].tp = SECRETARIOS;
            break;
        }
    }
}

void llenarAleatorios(Escuela morelos[TAM])
{
    char nombres[15][30] = {
        "Juan", "Maria", "Carlos", "Ana", "Pedro", "Laura",
        "Luis", "Sofia", "Miguel", "Lucia", "Diego", "Valeria",
        "Javier", "Camila", "Ricardo"};

    char direcciones[15][40] = {
        "Calle Principal, Ciudad A", "Avenida Central, Ciudad B", "Calle 10, Ciudad C",
        "Avenida 5, Ciudad D", "Calle Mayor, Ciudad E", "Avenida del Sol, Ciudad F",
        "Calle 20, Ciudad G", "Avenida Principal, Ciudad H", "Calle 7, Ciudad I",
        "Avenida Norte, Ciudad J", "Calle 15, Ciudad K", "Avenida Sur, Ciudad L",
        "Calle 12, Ciudad M", "Avenida Oeste, Ciudad N", "Calle 18, Ciudad O"};

    char telefonos[15][11] = {
        "1234567890", "9876543210", "5551234567",
        "9998887777", "1112223333", "4445556666",
        "7778889999", "2223334444", "8887776666",
        "5554443333", "1119998888", "6667778888",
        "3332221111", "9990001111", "4445556666"};

    int opc;
    char telefono[11];
    float prom;
    for (int i = 0; i < TAM; i++)
    {
        opc = rand() % 3;
        switch (opc)
        {
        case ALUMNOS:
            morelos[i].tp = ALUMNOS;
            strcpy(morelos[i].nombre, nombres[rand() % 15]);
            strcpy(morelos[i].direccion, direcciones[rand() % 15]);
            strcpy(morelos[i].telefono, telefonos[rand() % 15]);
            morelos[i].aux.promedio = 1.0 + (rand() / (RAND_MAX / 9.0));
            break;
        case MAESTROS:
            morelos[i].tp = MAESTROS;
            strcpy(morelos[i].nombre, nombres[rand() % 15]);
            strcpy(morelos[i].direccion, direcciones[rand() % 15]);
            strcpy(morelos[i].telefono, telefonos[rand() % 15]);
            morelos[i].aux.salario = 7500.0 + (rand() / (RAND_MAX / 30000.0));
            break;
        case SECRETARIOS:
            morelos[i].tp = SECRETARIOS;
            strcpy(morelos[i].nombre, nombres[rand() % 15]);
            strcpy(morelos[i].direccion, direcciones[rand() % 15]);
            strcpy(morelos[i].telefono, telefonos[rand() % 15]);
            morelos[i].aux.compensaciones = 7500.0 + (rand() / (RAND_MAX / 30000.0));
            break;
        default:
            break;
        }
    }
}

void imprimir(Escuela morelos[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        cout << "Escuela " << i + 1 << endl;
        cout << "Nombre: " << morelos[i].nombre << endl;
        cout << "Direccion: " << morelos[i].direccion << endl;
        cout << "Telefono: " << morelos[i].telefono << endl;

        switch (morelos[i].tp)
        {
        case ALUMNOS:
            cout << "Tipo: Alumnos" << endl;
            cout << "Promedio: " << morelos[i].aux.promedio << endl;
            break;
        case MAESTROS:
            cout << "Tipo: Maestros" << endl;
            cout << "Salario: " << morelos[i].aux.salario << endl;
            break;
        case SECRETARIOS:
            cout << "Tipo: SecretariOs" << endl;
            cout << "Compensaciones: " << morelos[i].aux.compensaciones << endl;
            break;
        default:
            break;
        }

        cout << endl;
    }
}