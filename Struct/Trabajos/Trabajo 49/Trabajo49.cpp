#include <iostream>
#include <iomanip>

#define TAM 3
#define TOTAL 2

using namespace std;

struct estudiante
{
	char nombre[30];
	float materias[TAM];
	char nomMat[TAM][30];
};

void llenar(estudiante gpo[TOTAL]);
void imprimir(estudiante gpo[TOTAL]);
float calcularProm(estudiante gpo[TOTAL]);

int main()
{

	estudiante grupo[TOTAL];

	cout << "Luis David Flores Martinez" << endl;
	llenar(grupo);
	cout << "Datos del grupo" << endl;
	imprimir(grupo);
	cout << "Promedio del grupo" << endl;
	calcularProm(grupo);
	return 0;
}

void llenar(estudiante gpo[TOTAL])
{
	for (int i = 0; i < TOTAL; i++)
	{
		cout << "Ingresa el nombre del alumno " << i + 1 << ": ";
		fflush(stdin);
		cin.getline(gpo[i].nombre, 30);
		for (int j = 0; j < TAM; j++)
		{
			cout << "Ingresa el nombre de la materia: ";
			fflush(stdin);
			cin.getline(gpo[i].nomMat[j], 30);
			cout << "Ingresa la calificacion final de " << gpo[i].nomMat[j] << ": ";
			cin >> gpo[i].materias[j];
		}
	}
}

void imprimir(estudiante gpo[TOTAL])
{
	for (int i = 0; i < TOTAL; i++)
	{
		cout << gpo[i].nombre << endl;
		for (int j = 0; j < TAM; j++)
		{
			cout << gpo[i].nomMat[j] << ": " << setprecision(3) << gpo[i].materias[j] << endl;
		}
	}
}

float calcularProm(estudiante gpo[TOTAL])
{
	float promedio, suma = 0;
	for (int i = 0; i < TOTAL; i++)
	{
		promedio = 0;
		suma = 0;
		for (int j = 0; j < TAM; j++)
		{
			suma += gpo[i].materias[j];
		}
		promedio = suma / TAM;
		cout << "El promedio del alumno " << i + 1 << " es: " << promedio << endl;
	}
}
