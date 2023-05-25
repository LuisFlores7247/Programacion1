#include <iostream>
#define TAM 3
#define TOTAL 2

using namespace std;

struct estudiante
{

    char nom[30];
    float materias[TAM];
    char nomMaterias[TAM][30];
};

estudiante llenar();
void imprimir(estudiante);
float calcularPromedio(estudiante);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    estudiante student;

    student = llenar();
    imprimir(student);

    estudiante students[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        students[i] = llenar();
    }
    for (int i = 0; i < TOTAL; i++)
    {
        imprimir(students[i]);
        cout << "La calificacion de " << students[i].nom << " es " << calcularPromedio(students[i]) << endl;
    }

    return 0;
}

estudiante llenar()
{
    estudiante aux;

    cout << "Ingrese el nombre del estudiante: ";
    fflush(stdin);
    cin.getline(aux.nom, 40);

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingresa el nombre de la materia " << i + 1 << ": ";
        fflush(stdin);
        cin.getline(aux.nomMaterias[i], 30);
        cout << "Ingresa el promedio de " << aux.nomMaterias[i] << ": ";
        cin >> aux.materias[i];
    }

    return aux;
}

void imprimir(estudiante student)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << student.nomMaterias[i] << endl;
        cout << student.materias[i] << endl;
    }
}

float calcularPromedio(estudiante student)
{
    float acum = 0;
    for (int i = 0; i < TAM; i++)
    {
        acum += student.materias[i];
    }
    return acum / TAM;
}