// funcion recursiva es aquella que se manda a llamar a si misma

// Simulacion de ciclos con recursividad .....

#include <stdio.h>
#include <string.h>
#define TAM 6

void imprimir1(int i);
void imprimir2(int j);
void imprimir3(int vec[TAM], int k);
void imprimircad(char v[30], int l);

int main()
{
    printf("Luis David Flores Martinez\n");
    int vec[TAM] = {10, 11, 12, 13, 14, 15};
    char cadena[30];

    // imprimir recursivamente del 10 al 1
    imprimir1(10);
    printf("\n");

    // imprimir recursivamente del 1 al 10
    imprimir2(1);

    printf("\n");
    // imprimir recursivamente el vector iniciando en casilla 0

    imprimir3(vec, 0);
    printf("\n");

    printf("\nDame una cadena: ");
    gets(cadena);
    imprimircad(cadena, 0);
    // imprimir recursivamente caracter por caracter una cadena

    return 0;
} // fin main

// implementar las funciones
void imprimir1(int i)
{
    if (i > 0)
    {
        printf("%d ", i);
        imprimir1(i - 1);
    }
}
void imprimir2(int j)
{
    if (j <= 10)
    {
        printf("%d ", j);
        imprimir2(j + 1);
    }
}

void imprimir3(int vec[TAM], int k)
{
    if (k < TAM)
    {
        printf("%d ", vec[k]);
        imprimir3(vec, k + 1);
    }
}

void imprimircad(char v[], int l)
{
    if (l < strlen(v))
    {
        printf("%c ", v[l]);
        imprimircad(v, l + 1);
    }
}
