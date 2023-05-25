//Tarea Progra 1,  Practica Arreglo de Consolas con un arreglo anidado de vídeo Juegos.
//20/05/2023
//Sergio Eder Cervantes Rincon

#include <iostream>
#include <cstring>
#define TAM 3
#define TOTAL 3

// tema struct aninados

using namespace std;

struct videojuegos
{ // struct anidado
	char nomjuego[60];
	float preciojuego;
};

struct consolas
{ // struct consolas
	char nomconsola[60];
	float precioconsola;
	videojuegos juegos[TAM]; // arreglo de estructuras del struct anidado
};

void imprimir(consolas consola[TOTAL]);
void consolamascara(consolas consola[TOTAL]);
void llenar(consolas consola[TOTAL]);
void buscar(consolas consola[TOTAL], char juego[30]);

int main()
{
	cout << "Sergio Eder Cervantes"<<endl;
	// declarar un arreglo del tipo del struct consolas de tamano TAM
	consolas consola[TOTAL];
	int band = 0;
	char juego[30];
	// manda llamar  a la funcion llenararreglo
	llenar(consola);

	// manda llamar a la funcion imprimir
	imprimir(consola);
	do
	{
		cout << "Ingresa el juego que deseas buscar: "<<endl;
		fflush(stdin);
		cin.getline(juego, 30);
		for (int i = 0; i < TOTAL; i++)
		{
			for (int j = 0; j < TAM; j++)
			{
				if (strcmp(juego, consola[i].juegos[j].nomjuego) == 0)
				{
					band = 0;
					buscar(consola, juego);
					break;
				}
				else
				{
					band = 1;
				}
			}
			if (band == 0)
			{
				break;
			}
		}
		if (band == 1)
		{
			cout << endl<<"Juego no encontrado...";
		}
	} while (band == 1);

	consolamascara(consola);

	return 0;
} // fin main

void llenar(consolas consola[])
{

	consolas consola0 = {"PlayStation 5",12500,{{"Marvel's Spider-Man: Miles Morales", 750}, {"Demon's Souls", 450}, {"Assassin's Creed Valhalla", 1200}}};
	consolas consola1 = {"Xbox Series X",9700,{{"Halo Infinite", 400}, {"Forza Horizon 5", 900}, {"Gears 5", 1000}}};
	consolas consola2 = {"Nintendo Switch",6500,{{"The Legend of Zelda: Breath of the Wild", 530},{"Animal Crossing: New Horizons", 280},{"Super Mario Odyssey", 690}}};
	consola[0] = consola0;
	consola[1] = consola1;
	consola[2] = consola2;
}

void imprimir(consolas consola[TOTAL])
{
	cout << "Imprimiendo consolas ...."<<endl<<endl;
	for (int i = 0; i < TOTAL; i++)
	{
		cout << "consola:" << consola[i].nomconsola<< endl;
		cout << endl;
		for (int j = 0; j < TAM; j++)
		{
			cout << "Juego: " << consola[i].juegos[j].nomjuego<< endl;
			cout << "Precio: " << consola[i].juegos[j].preciojuego<< endl;
			cout << endl;
		} // fin for j
	}	  // fin for i
} // fin funcion

void buscar(consolas consola[TOTAL], char tujuego[30])
{
	for (int i = 0; i < TOTAL; i++)
	{
		for (int j = 0; j < TAM; j++)
		{
			if (strcmp(tujuego, consola[i].juegos[j].nomjuego) == 0)
			{
				cout << endl<<"Consola compatible: " << consola[i].nomconsola << endl<<"Juego: " << consola[i].juegos[j].nomjuego << "  Precio: " << consola[i].juegos[j].preciojuego;

				break;
			}
		}
	}
}

void consolamascara(consolas consola[TOTAL])
{
	char nom[30];
	long may = 0;
	for (int i = 0; i < TOTAL; i++)
	{
		if (consola[i].precioconsola > may)
		{
			may = consola[i].precioconsola;
			strcpy(nom, consola[i].nomconsola);
		}
	}
	cout << endl<<"Consola mas cara: " << nom << "  Precio: $" << may;
}
