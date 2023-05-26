#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void llenarVec(int *, int);
void imprimirVec(int *, int);
void llenarMat(int **, int, int);
void imprimirMat(int **, int, int);

int main(int argc, char const *argv[])
{

    cout << "Luis David Flores Martinez" << endl;
    int *ptr1;

    ptr1 = (int *)malloc(sizeof(int));
    *ptr1 = 9;
    cout << *ptr1;
    cout << endl;

    char *ptr2;

    ptr2 = (char *)malloc(sizeof(char));
    *ptr2 = 's';
    cout << *ptr2;
    cout << endl;

    free(ptr1);
    free(ptr2);

    int *v;
    int n;
    cout << "De cuantas casillas quieres el vector: ";
    cin >> n;
    v = (int *)malloc(n * sizeof(int));

    llenarVec(v, n);
    imprimirVec(v, n);

    free(v);
    cout << endl;

    int **mat;

    int ren, col;
    cout << "De cuantos renglones: ";
    cin >> ren;
    cout << "De cuantos columnas: ";
    cin >> col;

    mat = (int **)malloc(ren * sizeof(int));
    for (int i = 0; i < ren; i++)
    {
        mat[i] = (int *)malloc(col * sizeof(int));
    }

    llenarMat(mat, ren, col);
    imprimirMat(mat, ren, col);
    for (int i = 0; i < ren; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}

void llenarVec(int *v, int n)
{
    cout << "\nLlenando el vector..." << endl;
    for (int i = 0; i < n; i++)
    {
        v[i] = (i + 1) * 5;
    }
    cout << "Listo" << endl;
}

void imprimirVec(int *v, int n)
{
    cout << "Imprimiendo el vector..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void llenarMat(int **mat, int ren, int col)
{
    cout << "\nLlenando la matriz... " << endl;
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = i + 1 * 10;
        }
    }
}

void imprimirMat(int **mat, int ren, int col)
{
    cout << "Imprimiendo la matriz..." << endl;
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}