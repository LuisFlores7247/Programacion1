#include <stdio.h>

int division(int num, int den);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    char resp = 's';
    int numerador, denominador, cociente;
    while (resp == 's')
    {
        printf("Ingresa el numerador: ");
        scanf("%d", &numerador);
        printf("Ingresa el denominador: ");
        scanf("%d", &denominador);
        cociente = division(numerador, denominador);
        printf("El resultado de la serie %d\n", cociente);

        printf("\nQuieres repetir el programa s/n: ");
        fflush(stdin);
        resp = getchar();
    }
    return 0;
}

int division(int num, int den)
{
    int aux;
    if (num > 0)
    {
        aux = 1 + division(num - den, den);
    }
    else
    {
        if (num == 0)
        {
            aux = 0;
        }
        else
        {
            aux = 1;
        }
    }
    return aux;
}