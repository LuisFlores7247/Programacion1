#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void llenar(int **mat, int ren, int col);
void imprimir(int **mat, int ren, int col);

int main(int argc, char const *argv[])
{
    cout<<"Luis David Flores Martinez";
    // Matrices dinamicas
    srand(time(0));
    int **m1;
    int r, c;
    cout << endl << "Matrices Dinamicas";
    cout << endl << "De cuantos Renglones = ";
    cin >> r;
    cout << endl << "De cuantas Columnas = ";
    cin >> c;

    // Creando los renglones de la matriz
    m1 = new int *[r];

    // Creando las columnas de la matriz
    for (int i = 0; i < r; i++)
    {
        m1[i] = new int[c];
    }

    llenar(m1, r, c);
    imprimir(m1, r, c);

    // Liberando la memoria dinamica
    // Primer paso: eliminar las columnas

    for (int i = 0; i < r; i++)
    {
        delete[] m1[i];
    }
    // Segundo paso: eliminar el vector de apuntadores
    delete[] m1;
    return 0;
}

void llenar(int **mat, int ren, int col)
{
    // Captura los datos de la matriz
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = 10 + rand() % (90 - 10 + 1);
        }
    }
}
void imprimir(int **mat, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
}