#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int **crearCasillas(int ren, int col);
void llenar(int **mat, int ren, int col);
void imprimir(int **mat, int ren, int col);

using namespace std;

int main()
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));
    int **matriz;
    int r, c;
    cout << "Total de renglones: ";
    cin >> r;
    cout << "Total de columnas: ";
    cin >> c;

    matriz = crearCasillas(r, c);

    llenar(matriz, r, c);
    imprimir(matriz, r, c);

    for (int i = 0; i < r; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
    return 0;
}

int **crearCasillas(int ren, int col)
{
    int **m;
    m = new int *[ren];

    for (int i = 0; i < ren; i++)
    {
        m[i] = new int[col];
    }
    return m;
}

void llenar(int **mat, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(mat[i] + j) = 10 + rand() % (90 - 10 + 1);
            // mat[i][j]=10+rand()%(90-10+1);
        }
    }
}

void imprimir(int **mat, int ren, int col)
{
    cout << endl
         << "Imprimiendo la matriz dinamica... " << endl;
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << *(mat[i] + j);
            // cout<<setw(4)<<mat[i][j]
        }
        cout << endl;
    }
}
