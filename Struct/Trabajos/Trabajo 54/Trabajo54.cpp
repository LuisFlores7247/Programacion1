#include <iostream>
#include <string.h>
#include <iomanip>
#define TAM 3
#define TOTAL 7

// tema struct aninados

using namespace std;

struct jugadores
{ // struct anidado
	char nomjug[30];
	float precio;
};

struct equipo
{ // struct equipo
	char nomeq[30];
	char cdsede[30];
	jugadores jug[TAM]; // arreglo de estructuras del struct anidado
};

void llenararreglo(equipo team[TOTAL]);
void imprimirarreglo(equipo team[TOTAL]);
void llenardatosfijos(equipo team[TOTAL]);
void buscarequipo(equipo eq[TOTAL], char tuequipo[30]);
void buscarjugador(equipo eq[TOTAL], char jugador[30]);
void sumaprecios(equipo eq[TOTAL]);

int main()
{
	cout << "Luis David Flores Martinez";
	equipo eq[TOTAL];
	char equipo[30], jugador[30];

	llenardatosfijos(eq);

	imprimirarreglo(eq);

	cout << "\nBusqueda de Equipo..." << endl;
	cout << "\nIngresa el nombre del equipo a buscar: ";
	fflush(stdin);
	cin.getline(equipo, 30);
	buscarequipo(eq, equipo);

	cout << "\nBusqueda de Jugador..." << endl;
	cout << "\nIngresa el nombre del jugador a buscar: ";
	fflush(stdin);
	cin.getline(jugador, 30);
	buscarjugador(eq, jugador);

	sumaprecios(eq);

	return 0;
} // fin main

void llenardatosfijos(equipo team[TOTAL])
{
	equipo eq0 = {"America", "Mexico", {{"Luis Saldivar", 230000}, {"Memo Vazquez", 567000}, {"Carlos Carrillo", 240000}}};
	equipo eq1 = {"Chivas", "Gdl", {{"Enrique Gutierrez", 670000}, {"Carlos Velasco", 108000}, {"Daniel Esparza", 130000}}};
	equipo eq2 = {"Necaxa", "Aguascalientes", {{"Oscar Mora", 190000}, {"Javier Ruiz", 430000}, {"Jorge Solis", 154000}}};
	equipo eq3 = {"Santos", "Torreon", {{"Francisco", 170000}, {"Jose de Jesus", 489000}, {"Guadalupe Mendoza", 367000}}};
	equipo eq4 = {"Pumas", "Ciudad de Mexico", {{"Juan Dinenno", 400000}, {"Carlos Gutierrez", 200000}, {"Sebastian Saucedo", 150000}}};
	equipo eq5 = {"Tigres", "Monterrey", {{"Andre-Pierre Gignac", 800000}, {"Guido Pizarro", 500000}, {"Nico Lopez", 350000}}};
	equipo eq6 = {"Cruz Azul", "Ciudad de Mexico", {{"Jonathan Rodríguez", 600000}, {"Luis Romo", 400000}, {"Orbelin Pineda", 450000}}};

	team[0] = eq0;
	team[1] = eq1;
	team[2] = eq2;
	team[3] = eq3;
	team[4] = eq4;
	team[5] = eq5;
	team[6] = eq6;
}

void imprimirarreglo(equipo team[TOTAL])
{
	cout << "Imprimiendo el arreglo de estructuras ....\n";
	for (int i = 0; i < TOTAL; i++)
	{
		cout << endl;
		cout << "Equipo:" << team[i].nomeq << endl;
		cout << "Ciudad sede: " << team[i].cdsede << endl;
		cout;
		for (int j = 0; j < TAM; j++)
		{
			cout << "...jugador#" << j + 1;
			cout << "...Nombre: " << team[i].jug[j].nomjug << endl;
			cout << "...Precio: " << team[i].jug[j].precio << endl;
			cout;
		} // fin for j
	}	  // fin for i
} // fin funcion

void buscarequipo(equipo eq[TOTAL], char tuequipo[30])
{
	for (int i = 0; i < TOTAL; i++)
	{
		if (!strcmp(eq[i].nomeq, tuequipo))
		{
			cout << endl;
			cout << "Equipo:" << eq[i].nomeq << endl;
			cout << "Ciudad sede: " << eq[i].cdsede << endl;
			cout;
			for (int j = 0; j < TAM; j++)
			{
				cout << "...jugador#" << j + 1;
				cout << "...Nombre: " << eq[i].jug[j].nomjug << endl;
				cout << "...Precio: " << eq[i].jug[j].precio << endl;
				cout;
			}
		}
	}
}

void buscarjugador(equipo eq[TOTAL], char jugador[30])
{
	for (int i = 0; i < TOTAL; i++)
	{
		cout << endl;
		for (int j = 0; j < TAM; j++)
		{
			if (strcmp(eq[i].jug[j].nomjug, jugador) == 0)
			{
				cout << "...jugador# " << j + 1 << endl;
				cout << "...Equipo: " << eq[i].nomeq << endl;
				cout << "...Nombre: " << eq[i].jug[j].nomjug << endl;
				cout << "...Precio: " << eq[i].jug[j].precio << endl;
			}
		}
	}
}

void sumaprecios(equipo eq[TOTAL])
{
	float sum;
	for (int i = 0; i < TOTAL; i++)
	{
		sum = 0;
		cout << endl;
		for (int j = 0; j < TAM; j++)
		{
			sum += eq[i].jug[j].precio;
		}
		cout << fixed << setprecision(2) << "Suma de los jugadores del equipo " << eq[i].nomeq << ": " << sum;
	}
}