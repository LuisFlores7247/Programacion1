#include <iostream>

using namespace std;

struct punto
{
	int x;
	int y;
};

void llenar(punto *vector, int tamano);
void imprimir(punto *vector, int tamano);

int main()
{
	cout << "Luis David Flores Martinez" << endl;
	punto *v;
	int n;
	cout << "Dame el tamanio del arreglo de estructuras: ";
	cin >> n;
	v = new punto[n];
	cout << "Llenando vector..." << endl;
	llenar(v, n);
	imprimir(v, n);

	delete[] v;

	return 0;
}

void llenar(punto *vector, int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		cout << "Dame las coordenadas del punto" << i + 1 << endl;
		cout << "x: ";
		cin >> vector[i].x;
		cout << "y: ";
		cin >> vector[i].y;
	}
}

void imprimir(punto *vector, int tamano)
{
	cout << "Imprimiendo coordenadas" << endl;
	for (int i = 0; i < tamano; i++)
	{
		cout << "Coordenadas del punto # " << i + 1 << endl;
		cout << "x= " << vector[i].x << endl;
		cout << "y= " << vector[i].y << endl;
		cout << endl;
	}
}
