#include <iostream>
#include <cstring>

#define TAM 3

using namespace std;

struct hospital
{
	char nomdoctor[30];
	char especialidad[30];
	struct paciente
	{
		char nompaciente[30];
		char padecimiento[30];
	} paci;
};

// prototipos
void llenar2(hospital hospi[TAM]);
void imprimir2(hospital hospi[TAM]);

hospital llenar1();
void imprimir1(hospital miclinica);

int main()
{
	cout << "Luis David Flores Martinez";
	cout << endl
		 << "------------------------------------------------" << endl;
	hospital clinica;

	clinica = llenar1();
	imprimir1(clinica);

	cout << endl
		 << "------------------------------------------------" << endl;
	hospital hospitales[TAM];
	llenar2(hospitales);
	imprimir2(hospitales);

	return 0;
}

void llenar2(hospital hospi[TAM])
{
	for (int i = 0; i < TAM; i++)
	{
		cout << "Ingresa el nombre del doctor: ";
		cin.getline(hospi[i].nomdoctor, 30);
		cout << "Ingresa la especialidad: ";
		cin.getline(hospi[i].especialidad, 30);
		cout << "Ingresa el nombre del paciente: ";
		cin.getline(hospi[i].paci.nompaciente, 30);
		cout << "Ingresa el padecimiento: ";
		cin.getline(hospi[i].paci.padecimiento, 30);
	}
}

void imprimir2(hospital hospi[TAM])
{
	for (int i = 0; i < TAM; i++)
	{
		cout << "Nombre del doctor: " << hospi[i].nomdoctor << endl;
		cout << "Especialidad: " << hospi[i].especialidad << endl;
		cout << "Nombre del paciente: " << hospi[i].paci.nompaciente << endl;
		cout << "Padecimiento: " << hospi[i].paci.padecimiento << endl;
	}
}

hospital llenar1()
{
	hospital aux;
	cout << "Ingresa el nombre del doctor: ";
	cin.getline(aux.nomdoctor, 30);
	cout << "Ingresa la especialidad: ";
	cin.getline(aux.especialidad, 30);
	cout << "Ingresa el nombre del paciente: ";
	cin.getline(aux.paci.nompaciente, 30);
	cout << "Ingresa el padecimiento: ";
	cin.getline(aux.paci.padecimiento, 30);

	return aux;
}

void imprimir1(hospital miclinica)
{
	cout << "Nombre del doctor: " << miclinica.nomdoctor << endl;
	cout << "Especialidad: " << miclinica.especialidad << endl;
	cout << "Nombre del paciente: " << miclinica.paci.nompaciente << endl;
	cout << "Padecimiento: " << miclinica.paci.padecimiento << endl;
}
