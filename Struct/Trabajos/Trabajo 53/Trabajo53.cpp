#include <iostream>
#include <string>
#define TAM 3
#define TOTAL 4

using namespace std;

struct equipo
{
    char nomeq[30];
    char cdsede[30];
    struct jugadores
    {
        char nomjug[30];
        float precio;
    } jug[TAM];
};

equipo llenarequipo();
void imprimirequipo(equipo miequipo);

void llenararreglo(equipo team[TOTAL]);
void imprimirarreglo(equipo team[TOTAL]);

int main()
{
    cout << "Luis David Flores Martinez";
    equipo mieq;
    mieq = llenarequipo();

    imprimirequipo(mieq);

    equipo eq[TOTAL];

    llenararreglo(eq);

    imprimirarreglo(eq);
    return 0;
} // fin main

equipo llenarequipo()
{
    equipo aux;
    cout << "\nllenando los datos de un equipo..." << endl;
    cout << "Dame el nombre del equipo: ";
    fflush(stdin);

    cin.getline(aux.nomeq, 30);
    cout << "ciudad sede: ";
    cin.getline(aux.cdsede, 30);
    for (int i = 0; i < TAM; i++)
    {
        cout << "Dame el nombre del jugador # " << i + 1 << ": ";
        fflush(stdin);
        cin.getline(aux.jug[i].nomjug, 30);
        cout << "precio del jugador: ";
        cin >> aux.jug[i].precio;
    }
    return aux;
}

void imprimirequipo(equipo eq)
{
    cout << "\nImprimiendo los datos de un equipo..." << endl;
    cout << "Nombre del equipo: " << eq.nomeq << endl;
    cout << "Ciudad de cede: " << eq.nomeq << endl;
    cout << "Imprimiendo Jugadores ...." << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << "Jugador # " << i + 1 << ": " << eq.jug[i].nomjug << endl;
        cout << "Precio: " << eq.jug[i].precio << endl;
    }
}

void llenararreglo(equipo team[TOTAL])
{
    cout << "\nLlenando el arreglo de estructuras ....\n";
    for (int i = 0; i < TOTAL; i++)
    {
        cout << "Dame el nombre del equipo: ";
        fflush(stdin);
        cin.getline(team[i].nomeq, 30);
        cout << "ciudad sede: ";
        cin.getline(team[i].cdsede, 30);
        cout << endl;
        for (int j = 0; j < TOTAL; j++)
        {
            cout << "Dame el nombre del jugador # " << j + 1 << ": ";
            fflush(stdin);
            cin.getline(team[i].jug[j].nomjug, 30);
            cout << "precio del jugador: ";
            cin >> team[i].jug[j].precio;
        }
    }
}

void imprimirarreglo(equipo team[TOTAL])
{
    cout << "\nImprimiendo el arreglo de estructuras ....\n";
    for (int i = 0; i < TOTAL; i++)
    {
        cout << "Nombre del equipo: " << team[i].nomeq << endl;
        cout << "Ciudad de cede: " << team[i].nomeq << endl;
        cout << "Imprimiendo Jugadores ...." << endl;
        for (int j = 0; j < TAM; j++)
        {
            cout << "Jugador # " << i + 1 << ": " << team[i].jug[j].nomjug << endl;
            cout << "Precio: " << team[i].jug[j].precio << endl;
        }
    }
}
