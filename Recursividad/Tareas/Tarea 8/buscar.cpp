#include <stdio.h>
#define TAM 5

int sumatoria(int v[TAM], int indice);
int buscar(int v[TAM], int indice, int num);

int main()
{
    int vector[TAM] = {1, 2, 3, 4, 5};
    int suma, num, flag;
    char resp;
    printf("Luis David Flores Martinez\n");

    suma = sumatoria(vector, TAM - 1);
    printf("\nSuma=%d", suma);
    do
    {
        printf("\nCual numero quieres buscar: ");
        scanf("%d", &num);
        flag = buscar(vector, TAM - 1, num);
        if (flag == 1)
        {
            printf("%d SI esta en el vector", num);
        }
        else
        {
            printf("%d NO esta en el vector", num);
        }
        printf("\nOtra busqueda s/n: ");
        fflush(stdin);
        scanf("%c", &resp);
    } while (resp == 's');
    return 0;
}

int sumatoria(int v[TAM], int indice)
{
    int aux;
    if (indice > 0)
    {
        aux = v[indice] + sumatoria(v, indice - 1);
    }
    else
    {
        aux = v[0];
    }
    return aux;
}

int buscar(int v[TAM], int indice, int num)
{
    int aux;
    if (indice >= 0)
    {
        if (v[indice] == num)
        {
            aux = 1;
        }
        else
        {
            aux = buscar(v, indice - 1, num);
        }
    }
    else
    {
        aux = 0;
    }
    return aux;
}