#include <stdio.h>

int eleva(int, int);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    int base, exponente, resultado;
    printf("\nDame la base: ");
    scanf("%d", &base);
    printf("\nDame el exponente:");
    scanf("%d", &exponente);
    resultado = eleva(base, exponente);
    printf("\nEl resultado de elevar %d a la %d es %d", base, exponente, resultado);
    return 0;
}

int eleva(int base, int exponente)
{
    int aux;
    if (exponente > 1)
    {
        aux = base * eleva(base, exponente - 1);
    }
    else
    {
        aux = base;
    }
    return aux;
}