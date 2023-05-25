#include <iostream>
#include <iomanip>
#include <time.h>

int **crearespacio_matriz(int ren, int col);
int *crearespacio_vector(int ren);
void imprimir_vector(int *v, int tam);
void imprimir_matriz(int **m, int ren, int col);
void llenar_matriz(int **m, int ren, int col); // La matriz se llena con números aleatorios entre 100 y 999
void ordenar_burbuja(int *v, int tam);         // ordenar un vector por el método de la burbuja. investigar este metodo
void matriz_vector(int **m, int *v, int ren, int col);
void vector_matriz(int **m, int *v, int ren, int col);

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(NULL));
    int **m, *v, ren, col;

    cout << "Ingrese el numero de Renglones: ";
    cin >> ren;
    cout << "Ingrese el numero de Columnas: ";
    cin >> col;
    // Creamos los espacios
    m = crearespacio_matriz(ren, col);
    v = crearespacio_vector(ren * col);

    // Llenamos la matriz y la convertimos a vector
    llenar_matriz(m, ren, col);
    matriz_vector(m, v, ren, col);

    cout << "\nMATRIZ\n";
    imprimir_matriz(m, ren, col);
    cout << "\nVECTOR\n";
    imprimir_vector(v, ren * col);

    ordenar_burbuja(v, ren * col);
    vector_matriz(m, v, ren, col);

    cout << "\nVECTOR ORDENADO\n";
    imprimir_vector(v, ren * col);

    cout << "\nMATRIZ ORDENADA\n";
    imprimir_matriz(m, ren, col);
    return 0;
}

int **crearespacio_matriz(int ren, int col)
{
    int **aux;
    aux = new int *[ren];
    for (int i = 0; i < ren; i++)
    {
        aux[i] = new int[col];
    }
    return aux;
}

int *crearespacio_vector(int ren)
{
    return new int[ren];
}

void imprimir_vector(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << setw(5) << v[i];
    }
    cout << endl;
}

void imprimir_matriz(int **m, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(5) << m[i][j];
        }
        cout << "\n";
    }
}

void llenar_matriz(int **m, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m[i][j] = 100 + rand() % (999 - 100 + 1);
        }
    }
}
void matriz_vector(int **m, int *v, int ren, int col)
{
    int k = 0;
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            v[k] = m[i][j];
            k++;
        }
    }
}

void ordenar_burbuja(int *v, int tam)
{
    int aux = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void vector_matriz(int **m, int *v, int ren, int col)
{
    int j = 0, k = 0;
    for (int i = 0; i < ren * col; i++)
    {
        m[j][k] = v[i];
        k++;
        if (k == col)
        {
            j++;
            k = 0;
        }
    }
}