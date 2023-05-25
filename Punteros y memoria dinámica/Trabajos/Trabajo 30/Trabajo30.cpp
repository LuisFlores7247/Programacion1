#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

/* Otra manera correcta de recibir una matriz dinamica
es con *mat en lugar de **mat */

void imprimir(int *mat[], int ren, int col);
void llenar(int *mat[], int ren, int col);
int **pedirEspacio(int ren, int col);

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));

    int **mat;
    int ren, col;

    ren = 1 + rand() % (5 - 1 + 1);
    col = 1 + rand() % (5 - 1 + 1);

    mat = pedirEspacio(ren, col);

    llenar(mat, ren, col);
    imprimir(mat, ren, col);

    // Liberando espacio
    // Primer paso Eliminar las columnas de cada renglon de la matriz;
    cout << endl;
    for (int i = 0; i < ren; i++)
    {
        cout << endl << "Borrando columnas del renglon " << i;
        delete mat[i];
    }
    cout << endl << "Borrando vector de punteros";
    delete[] mat;
    return 0;
}

int **pedirEspacio(int ren, int col)
{
    int **aux;
    aux = new int *[ren];
    for (int i = 0; i < ren; i++)
    {
        aux[i] = new int[col];
    }
    return aux;
}

void llenar(int *mat[], int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 10 + rand() % (90 - 10 + 1);
        }
    }
}

void imprimir(int *mat[], int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << *(mat[i] + j);
        }
        cout << endl;
    }
}