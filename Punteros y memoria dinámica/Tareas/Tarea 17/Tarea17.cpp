#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void imprimir(int *v, int n);
int *pistola(int n);
int *baraja(int n);
void shuffle(int *v, int tam);

int main()
{
    srand(time(NULL));
    int n, *cargador, *cartas;
    cout << endl << "Luis David Flores Martinez"  << endl;

    cout << endl << "**************************************";
    cout << endl << "Capacidad en balas de la pistola: ";
    cin >> n;
    cargador = pistola(n);
    imprimir(cargador, n);


    cout << endl << endl << "****************************************";
    cout << endl << "De cuantas cartas es la baraja: ";
    cin >> n;
    cartas = baraja(n);
    imprimir(cartas, n);


    delete[] cargador;
    delete[] cartas;

    return 0;
}

void imprimir(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << v[i];
    }
    cout << endl;
}

int *pistola(int n)
{
    int *aux = new int[n], x;

    x = (n * 0.3) + 1;

    for (int i = 0; i < n; i++)
    {
        aux[i] = 0;
    }

    for (int i = 0; i < x; i++)
    {
        aux[i] = 1;
    }

    for (int i = 0; i < x; i++)
    {
        shuffle(aux, n);
    }

    return aux;
}

int *baraja(int n)
{
    int *aux = new int[n];
    for (int i = 0; i < n; i++)
    {
        aux[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        shuffle(aux, n);
    }
    return aux;
}

void shuffle(int *v, int tam)
{
    if (tam > 1)
    {
        for (int i = 0; i < tam - 1; i++)
        {
            int j = i + rand() / (RAND_MAX / (tam - i) + 1);
            int t = v[j];
            v[j] = v[i];
            v[i] = t;
        }
    }
}