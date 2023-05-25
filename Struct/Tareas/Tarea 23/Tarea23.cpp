#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <iomanip>

#define TAM 15

using namespace std;

struct jugadores
{
    char nomjug[40];
    int edad;
    float sueldo;
    char eq[40];
};

void llenar(jugadores equipo[TAM]);
void imprimir(jugadores equipo[]);
void jugadoresequipo(jugadores equipo[], char team[]);
void jugadormenoredad(jugadores equipo[TAM]);
void datosjugador(jugadores equipo[TAM], char nombre[40]);
float promedio(jugadores equipo[TAM]);
void jugadorMasGana(jugadores equipo[TAM]);
int menu();
void control(jugadores equipo[]);

int main()
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));
    jugadores equipo[TAM];
    llenar(equipo);
    control(equipo);
    return 0;
}

void control(jugadores equipo[])
{
    int opc, flag = 0;
    char eqbuscar[40], nom[40];
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            imprimir(equipo);
            break;
        case 2:
            do
            {
                cout << "\nIngresa el equipo: ";
                cin >> eqbuscar;
                for (int i = 0; i < TAM; i++)
                {
                    if (strcmp(eqbuscar, equipo[i].eq) == 0)
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    cout << "\nEl equipo no existe";
                }

            } while (flag == 0);
            jugadoresequipo(equipo, eqbuscar);
            break;
        case 3:
            jugadormenoredad(equipo);
            break;
        case 4:
            do
            {
                cout << "\nIngresa el nombre del jugador: ";
                fflush(stdin);
                cin.getline(nom, 40);
                for (int i = 0; i < TAM; i++)
                {
                    if (strcmp(nom, equipo[i].nomjug) == 0)
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    cout << "\nEl jugador no existe";
                }
            } while (flag == 0);
            datosjugador(equipo, nom);
            break;
        case 5:
            cout << "El promedio de edad de los jugadores es: " << promedio(equipo);
            break;
        case 6:
            jugadorMasGana(equipo);
            break;

        case 7:
            cout << endl
                 << "Fin del programa ...";
            break;
        default:
            cout << endl
                 << "Error en tu opcion ...";
        }

    } while (opc != 7);
}

int menu()
{
    int opc;

    cout << "\n\nMenu" << endl;
    cout << "1. Imprimir jugadores de la liga" << endl;
    cout << "2. Jugadores que estan el equipo que indiques" << endl;
    cout << "3. Jugador con menor edad y en cual equipo juega" << endl;
    cout << "4. Dado el nombre de un jugador imprimir su equipo, edad y sueldo" << endl;
    cout << "5. Promedio de edades" << endl;
    cout << "6. Mayor sueldo" << endl;
    cout << "7. Salir" << endl;

    cout << "Dame una opcion: ";
    cin >> opc;

    return opc;
}

void llenar(jugadores equipo[TAM])
{
    char nombres[15][40] = {"Luis Enrique", "Carlos", "Daniel", "Francisco Javier", "Oscar", "Jorge", "Enrique", "Victor", "Jose de Jesus", "Guadalupe", "Alejandro", "Samuel", "Aangel Antonio", "Anyelo", "Guillermo"};
    char apellidos[15][40] = {"Gutierrez", "Salazar", "Comte", "Rodriguez", "Gonzalez", "Velasco", "Lopez", "Hernandez", "Estrada", "Moreno", "Alba", "Trejo", "Perez", "Honda", "Arteaga"};
    char equiposliga[12][40] = {"America", "Guadalajara", "Necaxa", "Toluca", "Cruz Azul", "Puebla", "Monterrey", "Tigres", "Santos", "Pachuca", "Morelia", "Leon"};

    char jugnombre[80];

    int n;
    cout << "Llenando con datos aleatorios el arreglo de jugadores ....\n";
    for (int i = 0; i < TAM; i++)
    {
        strcpy(jugnombre, "");
        n = 0 + rand() % (14 - 0 + 1);
        strcat(jugnombre, nombres[n]);
        strcat(jugnombre, " ");

        n = 0 + rand() % (14 - 0 + 1);
        strcat(jugnombre, apellidos[n]);

        strcpy(equipo[i].nomjug, jugnombre);

        n = 0 + rand() % (11 - 0 + 1);
        strcpy(equipo[i].eq, equiposliga[n]);

        equipo[i].edad = 17 + rand() % (34 - 17 + 1);

        equipo[i].sueldo = 30000 + rand() % (120000 - 30000 + 1);

    } // fin for
}

void imprimir(jugadores equipo[])
{

    cout << "Imprimiendo el arreglo de jugadores ....\n";

    cout << endl;
    cout << left << setw(3) << "#";
    cout << left << setw(40) << "Nombre";
    cout << left << setw(20) << "Equipo";
    cout << left << setw(10) << "Edad";
    cout << left << setw(15) << "Sueldo";

    for (int i = 0; i < TAM; i++)
    {
        cout << endl;
        cout << left << setw(3) << i + 1;
        cout << left << setw(40) << equipo[i].nomjug;
        cout << left << setw(20) << equipo[i].eq;
        cout << left << setw(10) << equipo[i].edad;
        cout << left << setw(15) << equipo[i].sueldo;
    }
}

void jugadoresequipo(jugadores equipo[], char team[])
{

    cout << "\nJugadores del " << team << ":\n";
    for (int i = 0; i < TAM; i++)
    {
        if (strcmp(team, equipo[i].eq) == 0)
        {
            cout << equipo[i].nomjug << "\n";
        }
    }
}

void jugadormenoredad(jugadores equipo[TAM])
{

    int min = 100, ed;
    for (int i = 0; i < TAM; i++)
    {
        if (equipo[i].edad < min)
        {
            min = equipo[i].edad;
            ed = i;
        }
    }

    cout << "\nEl jugador mas joven es " << equipo[ed].nomjug << " del equipo " << equipo[ed].eq;
}

void datosjugador(jugadores equipo[TAM], char nombre[40])
{
    for (int i = 0; i < TAM; i++)
    {
        if (strcmp(nombre, equipo[i].nomjug) == 0)
        {
            cout << "\n"
                 << nombre << "\nEdad: " << equipo[i].edad << "  Equipo: " << equipo[i].eq << "  Salario: " << equipo[i].sueldo;
        }
    }
}

float promedio(jugadores equipo[TAM])
{
    float acum = 0;

    for (int i = 0; i < TAM; i++)
    {
        acum = acum + equipo[i].edad;
    }
    acum = acum / TAM;
    return acum;
}

void jugadorMasGana(jugadores equipo[TAM])
{
    float sueldo = 0;
    int pop;
    for (int i = 0; i < TAM; i++)
    {
        if (equipo[i].sueldo > sueldo)
        {
            sueldo = equipo[i].sueldo;
            pop = i;
        }
    }
    cout << "\nEl jugador con mayor salario es:\n"
         << equipo[pop].nomjug << "  Equipo: " << equipo[pop].eq << "  Edad: " << equipo[pop].edad << "  Salario: " << equipo[pop].sueldo;
}