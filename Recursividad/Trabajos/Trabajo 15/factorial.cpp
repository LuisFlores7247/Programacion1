#include <stdio.h>

int factorial(int num);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    int num, resultado;
    printf("\nDame un numero: ");
    scanf("%d", &num);
    resultado = factorial(num);
    printf("El factorial de %d es %d", num, resultado);
    return 0;
}

int factorial(int num)
{
    int aux;
    if (num > 1)
    {
        aux = num * factorial(num - 1);
    }
    else
    {
        aux = num;
    }
    return aux;
}