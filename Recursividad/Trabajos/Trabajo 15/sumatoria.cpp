#include <stdio.h>

int sumaNumeros(int);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    int n, suma;
    printf("\nCuantos numeros quieres sumar: ");
    scanf("%d", &n);

    suma = sumaNumeros(n);

    printf("La suma de los numeros es : %d\n", suma);
    return 0;
}

int sumaNumeros(int n)
{
    int suma, num;
    if (n >= 1)
    {
        printf("\nDame un numero: ");
        scanf("%d", &num);
        suma = num + sumaNumeros(n - 1);
    }
    else
    {
        suma = 0;
    }
    return suma;
}