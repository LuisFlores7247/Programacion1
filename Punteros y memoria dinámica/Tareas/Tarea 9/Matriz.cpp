#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#define TAM 5

using namespace std;

void llenar(float matriz[][TAM]);
void imprimir1(float matriz[][TAM]);
void imprimir2(float matriz[][TAM]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    float matriz[TAM][TAM];
    cout << endl << "Luis David Flores Martinez";
    llenar(matriz);
    imprimir1(matriz);
    imprimir2(matriz);
    return 0;
}

void llenar(float matriz[][TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            matriz[i][j] = 1 + rand() % (1000) * 3.1416;
        }
    }
}

void imprimir1(float matriz[][TAM])
{
    cout << endl << "Imprimiendo Matriz" << endl;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimir2(float matriz[][TAM])
{
    cout << endl << "Impriendo matriz bonita" << endl;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            cout << right << setw(10) << fixed << setprecision(2) << matriz[i][j] << " ";
        }
        cout << endl;
    }
}