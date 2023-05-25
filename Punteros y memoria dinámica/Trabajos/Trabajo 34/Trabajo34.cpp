#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void llenar(int **mat, int ren, int col);
void imprimir(int **mat, int ren, int col);
void sumaXrenglon(int **mat, int ren, int col);
void sumaXcolumna(int **mat, int ren, int col);

// implementar las siguientes funciones

// int veces(int **mat,int ren,int col, int dato);//retorna cuantas veces se repite el dato que solicitas

int main()
{
	srand(time(0));
	int **m1, r, c;
	cout<< "Luis David Flores Martinez";
	cout << endl << "Matrices Dinamicas ...";
	cout << endl << "De cuantos renglones= ";
	cin >> r;
	cout << endl << "De cuantas columnas= ";
	cin >> c;

	// creacion de la matriz dinamica
	m1 = new int *[r];
	for (int i = 0; i < r; i++)
	{
		m1[i] = new int[c];
	}

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

void llenar(int **mat, int ren, int col)
{
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
	cout << endl << "Imprimiendo matriz ..." << endl;
	for (int i = 0; i < ren; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(4) << mat[i][j];
		}
		cout << endl;
	}
}

void sumaXrenglon(int **mat, int ren, int col)
{
	cout << endl << "SUMA POR RENGLON ..." << endl;
	int sum;
	for (int i = 0; i < ren; i++)
	{
		sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += mat[i][j];
		}
		cout<< "La suma del renglon " << i+1 << " = " << sum << endl;
	}
}
void sumaXcolumna(int **mat, int ren, int col)
{
	cout << endl << "SUMA POR COLUMNA" << endl;
	int sum=0;
	for (int i = 0; i < col; i++) {
		sum = 0;
		for (int j = 0; j < ren; j++) {
		sum += mat[j][i];
		}
		cout<< "La suma de la columna " << i+1 << " = " << sum << endl;
  	}
}