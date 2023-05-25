#define TAM 20

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//prototipos

void llenarVector(int v[TAM]);
void imprimirVector(int v[TAM]);
int sumatoriaVector(int v[TAM]);

int main(int argc, char const *argv[])
{
    int v[TAM];
    srand(time(0));
    llenarVector(v);
    printf("Luis David Flores Martinez\n");
    imprimirVector(v);
    printf("\nSumatoria: %d", sumatoriaVector(v));
    return 0;
}

// implementacion de funciones

void llenarVector(int v[TAM]){
    for (int i = 0; i < TAM; i++)
    {
        v[i] = 1 + rand()%(20 - 1 + 1);
    }

}

void imprimirVector(int v[TAM]){
    printf("VECTOR\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", v[i]);
    }
}

int sumatoriaVector(int v[TAM]){
    int suma = 0;

    for (int i = 0; i < TAM; i++)
    {
        suma += v[i];
    }
    return suma;
}