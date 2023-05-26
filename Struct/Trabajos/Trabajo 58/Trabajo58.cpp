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

void llenardatos(Escuela morelos[TAM]);
void llenarAleatorios(Escuela morelos[TAM]);
void imprimirTp(Escuela morelos[TAM], int tipo);
void imprimir(Escuela morelos[TAM]);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));
    Escuela morelos[TAM];
    llenardatos(morelos);
    llenarAleatorios(morelos);
    int opc;
    do
    {
        cout << "\nQue deseas hacer?\n1.-Alumnos\n2.-Maestros\n3.-Secretarios\n4.-Todos\n5.-Salir\nOpcion:  ";
        cin >> opc;
        switch (opc)
        {
        case ALUMNOS:
            cout << "\nImprimiendo Alumnos..." << endl;
            imprimirTp(morelos, opc);

            break;
        case MAESTROS:
            cout << "\nImprimiendo Maestros..." << endl;
            imprimirTp(morelos, opc);

            break;
        case SECRETARIOS:
            cout << "\nImprimiendo Secretarios..." << endl;
            imprimirTp(morelos, opc);

            break;
        case 4:
            cout << "\nImprimiendo Todos..." << endl;
            imprimir(morelos);
            break;

        default:
            cout << "\nOpcion incorrcta";
            break;
        }
    } while (opc != 5 || (opc < 1 || opc > 5));

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

void llenarAleatorios(Escuela Morelos[TAM])
{

    int aux, aleatorio1, aleatorio2;

    char nom[20][30] = {"Alejandro ", "Luci ", "Victor ", "Anabel ", "Pablo ", "Gaby ", "Patricio ", "Rocio ", "Cristobal ", "Flor ", "Mario ", "Johana ", "Daniel ", "Dulce ", "Angel ", "Miranda ", "Esteban ", "Vanessa", "Alberto ", "Julia "};
    char apellidos[20][30] = {"Barba", "Delgado", "Diaz", "Jimenez", "Avila", "Alva", "Hernandez", "Garcia", "Martinez", "Lopez", "Gonzalez", "Perez", "Rodriguez", "Sanchez", "Cruz", "Ramirez", "Flores", "Gomez", "salazar", "comte"};
    char direcciones[22][40] = {"lima", "peru", "dorado", "navarrete", "lopez mateos", "golondrinas", "argentina", "montevideo", "campeche", "paris", "londres", "sierra nevada", "montes apalaches", "sierra pintada", "avenida universidad", "circunvalacion sur", "circunvalacion norte", "madero", "centro", "nieto", "allende", "victoria"};

    cout << "Generando datos aleatoriamente ... ";
    for (int i = 0; i < TAM; i++)
    {

        aleatorio1 = 0 + rand() % (19 - 0 + 1);
        aleatorio2 = 0 + rand() % (19 - 0 + 1);

        strcpy(Morelos[i].nombre, "");
        strcpy(Morelos[i].direccion, "");
        strcpy(Morelos[i].telefono, "");
        // colocar nombre
        strcat(Morelos[i].nombre, nom[aleatorio1]);
        strcat(Morelos[i].nombre, apellidos[aleatorio2]);
        // cout<<endl<<Morelos[i].nombre;

        // colocar direccion
        aleatorio1 = 0 + rand() % (21 - 0 + 1);
        aleatorio2 = 100 + rand() % (999 - 100 + 1); // aleatorio para el numero de la calle

        strcat(Morelos[i].direccion, direcciones[aleatorio1]);
        // cout<<endl<<Morelos[i].direccion;

        // colocar telefono
        aleatorio1 = 1000000 + rand() % (1200000 - 1000000 + 1);
        itoa(aleatorio1, Morelos[i].telefono, 10);
        // cout<<endl<<Morelos[i].telefono;

        aux = 1 + rand() % (3 - 1 + 1); // aleatorio para el tipo de persona

        switch (aux)
        {
        case ALUMNOS:
            Morelos[i].tp = ALUMNOS;
            // generando promedio aleatoriamente
            aleatorio1 = 6 + rand() % (10 - 6 + 1);   // para parte entera
            aleatorio2 = 10 + rand() % (99 - 10 + 1); // para los decimales

            Morelos[i].aux.promedio = aleatorio1 + aleatorio2 / 100.0;
            break;

        case MAESTROS:
            Morelos[i].tp = MAESTROS;
            // generando salario aleatoriamente
            Morelos[i].aux.salario = 1200 + rand() % (15000 - 1200 + 1);
            break;

        case SECRETARIOS:
            Morelos[i].tp = SECRETARIOS;
            // generando compensacion aleatoriamente
            Morelos[i].aux.compensaciones = 600 + rand() % (1500 - 600 + 1);
            break;
        } // fin switch
    }     // fin de for
} // fin de funcion llenar

void imprimir(Escuela morelos[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
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
void imprimirTp(Escuela morelos[TAM], int tipo)
{
    for (int i = 0; i < TAM; i++)
    {
        if (morelos[i].tp == tipo)
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
}