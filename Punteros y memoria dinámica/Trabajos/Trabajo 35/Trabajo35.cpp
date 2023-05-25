#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void llenar(int **mat, int ren, int *col);
void imprimir(int **mat, int ren, int *col);
void **crearEspaciosColumnasMatrizEscalonada(int **mat, int *col,int ren);
void sumaXrenglon(int **mat, int ren, int *col);
void sumaXcolumna(int **mat, int ren, int *col);

// implementar las siguientes funciones

// int veces(int **mat,int ren,int col, int dato);//retorna cuantas veces se repite el dato que solicitas

int main()
{
	srand(time(0));
	int **m1, r, *c;
	cout<< "Luis David Flores Martinez";
	cout << endl << "Matrices Dinamicas ...";
	cout << endl << "De cuantos renglones= ";
	cin >> r;
	c = new int[r];
	for (int i = 0; i < r; i++)
	{
		cout << endl << "De cuantas columnas es el renglon "<< i + 1 << " = ";
		cin >> c[i];
	}

	// creacion de la matriz dinamica
	m1 = new int *[r];

	crearEspaciosColumnasMatrizEscalonada(m1,c,r);
	llenar(m1, r, c);

	imprimir(m1, r, c);

	sumaXrenglon(m1, r, c);
	sumaXcolumna(m1, r, c);
	/******************************************************/

	// manda llamar las funciones sumaXrenglon, sumaXcolumna y veces

	/*****************************************************/

	// liberar espacio
	for (int i = 0; i < r; i++)
	{
		delete[] m1[i];
	}
	delete[] m1;
}
void **crearEspaciosColumnasMatrizEscalonada(int **mat, int *col,int ren){
	for (int i = 0; i < ren; i++)
	{
		mat[i] = new int[col[i]];
	}

}

void llenar(int **mat, int ren, int *col)
{
	for (int i = 0; i < ren; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			mat[i][j] = 8 + rand() % (16 - 8 + 1);
		}
	}
}

void imprimir(int **mat, int ren, int *col)
{
	cout << endl << "Imprimiendo matriz ..." << endl;
	for (int i = 0; i < ren; i++)
	{
		for (int j = 0; j < col[i]; j++)
		{
			cout << setw(4) << mat[i][j];
		}
		cout << endl;
	}
}

void sumaXrenglon(int **mat, int ren, int *col)
{
	cout << endl << "SUMA POR RENGLON ..." << endl;
	int sum;
	for (int i = 0; i < ren; i++)
	{
		sum = 0;
		for (int j = 0; j < col[i]; j++)
		{
			sum += mat[i][j];
		}
		cout << "La suma del renglon " << i+1 << " = " << sum << endl;
	}
}
void sumaXcolumna(int **mat, int ren, int *col)
{
	cout << endl << "SUMA POR COLUMNA ... " << endl;
	int j = 0, max = 0;

	for (int i = 0; i < ren; i++)
	{
		if (col[i] > max)
		{
			max = col[i];
		}
	}
	for (int i = 0; i < max; i++)
	{
		int sum = 0;
		for (j = 0; j < ren; j++)
		{
			if (col[j] > i)
			{
				sum += mat[j][i];
			}
		}
		cout << "La suma de la columna " << i+1 << " = " << sum << endl;
	}
}