#include <iostream>
#include <stdlib.h>
#define TAM 4

using namespace std;

struct estados
{
    char nom[30];
    int total;
    float temp;
};

void llenar(estados est[TAM]);
void imprimir(estados est[TAM]);
float obtieneTempMayor(estados est[TAM]);
void edosTempMayor(estados est[TAM], float mayor);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez";
    estados est[TAM];
    llenar(est);
    imprimir(est);
    cout << "La temperatura mayor es: " << obtieneTempMayor(est);

    return 0;
}

void llenar(estados est[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        cout << endl;
        cout << "Ingresa el nombre del estado: ";
        fflush(stdin);
        cin.getline(est[i].nom, 30);
        cout << "Ingresa el total de municipios del estado: ";
        cin >> est[i].total;
        cout << "Ingresa la temperatura del estado: ";
        cin >> est[i].temp;
    }
}

void imprimir(estados est[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        cout << est[i].nom << " " << est[i].total << " " << est[i].temp << endl;
    }
}

float obtieneTempMayor(estados est[TAM])
{
    float mayor = 0;
    for (int i = 0; i < TAM; i++)
    {
        if (est[i].temp > mayor)
        {
            mayor = est[i].temp;
        }
    }
    edosTempMayor(est, mayor);
    return mayor;
}

void edosTempMayor(estados est[TAM], float mayor)
{
    cout << "\nEl estado con mayor temperatura es:";
    for (int i = 0; i < TAM; i++)
    {
        if (est[i].temp == mayor)
        {
            cout << est[i].nom << endl;
        }
    }
}