#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int menu();
void promedioEdades();
void imprimirNombres();
void buscarJugador(string busqueda);
void buscarEquipo(string busqueda);
int main()
{
	cout << "Luis David Flores Martinez";
	int op;
	string busqueda;
	do
	{
		op = menu();
		switch (op)
		{
		case 1:
			imprimirNombres();
			promedioEdades();
			break;
		case 2:
			cout << endl << "Ingresa el jugador a buscar: ";
			fflush(stdin);
			getline(cin, busqueda);
			buscarJugador(busqueda);
			break;
		case 3:
			cout << endl << "Ingresa el equipo a buscar: ";
			fflush(stdin);
			getline(cin, busqueda);
			buscarEquipo(busqueda);
			break;
		case 4: cout<<endl<<"fin del programa";
		break;
		}
	} while (op != 4);

	return 0;
} // fin main

void promedioEdades()
{
	fstream file;
	string nombre, equipo;
	float prom, sum, total = 0, edad;
	file.open("jugadores.txt", ios::in);
	while (file >> nombre >> equipo >> edad)
	{
		total += 1;
		sum += edad;
	}
	prom = sum / total;
	cout << endl << "El promedio de las edades es: " <<  prom;
	file.close();
}

void imprimirNombres()
{
	fstream file;
	file.seekg(0);
	string nombre, equipo;
	int edad;
	file.open("jugadores.txt", ios::in);
	while (file >> nombre >> equipo >> edad)
	{
		for (int i = 0; i < nombre.size(); i++)
		{
			if (nombre[i] == '_')
			{
				cout << " ";
			}
			else
			{
				cout << nombre[i];
			}
		}
		cout << setw(10) << "";
		for (int i = 0; i < equipo.size(); i++)
		{
			if (equipo[i] == '_')
			{
				cout << " ";
			}
			else
			{
				cout << equipo[i];
			}
		}
		cout << setw(10) << "";
		cout << edad << endl;
	}
	file.close();
}
void buscarJugador(string busqueda)
{
	string nombre, equipo;
	int edad, flag = 0;
	for (int i = 0; i < busqueda.size(); i++)
	{
		if (busqueda[i] == ' ')
		{
			busqueda[i] = '_';
		}
	}

	fstream file;
	file.open("jugadores.txt", ios::in);

	while (file >> nombre >> equipo >> edad)
	{
		if (busqueda == nombre)
		{
			for (int i = 0; i < nombre.size(); i++)
			{
				if (nombre[i] == '_')
				{
					cout << " ";
				}
				else
				{
					cout << nombre[i];
				}
			}
			cout << "\t";
			for (int i = 0; i < equipo.size(); i++)
			{
				if (equipo[i] == '_')
				{
					cout << " ";
				}
				else
				{
					cout << equipo[i];
				}
			}
			cout << "\t" << edad;
			flag = 1;
		}
	}
	if (flag <= 0)
	{
		cout << endl << "No se encontro el jugador";
	}

	file.close();
}

void buscarEquipo(string busqueda)
{
	string nombre, equipo;
	int edad, flag = 0;
	for (int i = 0; i < busqueda.size(); i++)
	{
		if (busqueda[i] == ' ')
		{
			busqueda[i] = '_';
		}
	}

	fstream file;
	file.open("jugadores.txt", ios::in);
	cout << "Jugadores del equipo ";
	cout << endl << endl;
	while (file >> nombre >> equipo >> edad)
	{
		if (busqueda == equipo)
		{
			for (int i = 0; i < nombre.size(); i++)
			{
				if (nombre[i] == '_')
				{
					cout << " ";
				}
				else
				{
					cout << nombre[i];
				}
			}
			cout << "\t" << edad;
			flag = 1;
		}
		cout << endl;
	}
	if (flag <= 0)
	{
		cout << endl << "No se encontro el equipo";
	}

	file.close();
}
// teclea funciones que falten

int menu()
{
	int op;
	do
	{
		cout << endl;
		cout << endl<<"--------------------------";
		cout << endl<<"|           Menu         |";
		cout << endl<<"--------------------------";

		cout << endl<<"1. Jugadores";
		cout << endl<<"2. Busqueda de jugador";
		cout << endl<<"3. Busqueda de equipo";
		cout << endl<<"4. Salir";
		cout << endl<<"Cual opcion deseas: ";
		cin >> op;
		if (op<1 || op>4) 		   cout << endl<<"Error en la opcion ...";
	} while (op < 1 || op > 4);
	return op;
}