#include <iostream>
#include <iomanip>

int **crearespacio(int ren, int col);
void **suma(int **m1, int **m2, int **m3, int ren, int col);
void llenar(int **m, int ren, int col);
void **multiplicacion(int **m1, int **m2, int **m4, int tam);
void imprimir(int **m, int ren, int col);

using namespace std;

int main(int argc, char const *argv[])
{
    int **m1, **m2, **m3, **m4;
    cout<<"Luis David Flores Martinez"<<endl;
    int ren1, col1, ren2, col2;
    cout << "Ingrese el numero de renglones de la matriz 1: ";
    cin >> ren1;
    cout << "Ingrese el numero de columnas de la matriz 1: ";
    cin >> col1;
    cout << "Ingrese el numero de renglones de la matriz 2: ";
    cin >> ren2;
    cout << "Ingrese el numero de columnas de la matriz 2: ";
    cin >> col2;
    m1 = crearespacio(ren1, col1);
    m2 = crearespacio(ren2, col2);
    llenar(m1, ren1, col1);
    llenar(m2, ren2, col2);
    cout << "Matriz 1" << endl;
    imprimir(m1, ren1, col1);
    cout << "Matriz 2" << endl;
    imprimir(m2, ren2, col2);
    if (ren1 == ren2 && col1 == col2)
    {
        suma(m1, m2, m3, ren1, col1);
    }
    else
    {
        cout << "Las matrices no se pueden sumar" << endl;
    }
    if (ren1 == col2)
    {
        multiplicacion(m1, m2, m4, ren1);
    }
    else
    {
        cout << "Las matrices no se pueden Multiplicar" << endl;
    }
    return 0;
}

int **crearespacio(int ren, int col)
{
    int **aux;
    aux = new int *[ren];
    for (int i = 0; i < ren; i++)
    {
        aux[i] = new int[col];
    }
    return aux;
}

void **suma(int **m1, int **m2, int **m3, int ren, int col)
{
    cout << "SUMA" << endl;
    m3 = new int *[ren];
    for (int i = 0; i < ren; i++)
    {
        m3[i] = new int[col];
    }

    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << m3[i][j] << " ";
        }
        cout << endl;
    }
}

void **multiplicacion(int **m1, int **m2, int **m4, int tam)
{
    cout << "MULTIPLICACION" << endl;
    m4 = new int *[tam];
    for (int i = 0; i < tam; i++)
    {
        m4[i] = new int[tam];
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            m4[i][j] = 0;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            for (int k = 0; k < tam; k++)
            {
                m4[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cout << setw(4) << m4[i][j] << " ";
        }
        cout << endl;
    }
}

void llenar(int **m, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m[i][j] = 1 + rand() % (10 - 1 + 1);
        }
    }
}

void imprimir(int **m, int ren, int col)
{
    for (int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << m[i][j] << " ";
        }
        cout << endl;
    }
}