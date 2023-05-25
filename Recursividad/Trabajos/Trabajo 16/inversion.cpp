#include <stdio.h>

float inversion(float monto, float year, float tasa);

int main()
{
    printf("Luis David Flores Martinez");
    char resp = 's';
    float monto, year, tasa, capital;

    while (resp == 's')
    {

        printf("\nIngresa el monto: ");
        scanf("%f", &monto);
        printf("Ingresa por cuantos anios vas a invertir: ");
        scanf("%f", &year);
        printf("Ingresa la tasa de intereses (.10, .05, .08, etc): ");
        scanf("%f", &tasa);
        capital = inversion(monto, year, tasa);
        printf("\nTotal de Capital: %.2f\n", capital);

        printf("\nQuieres repetir el programa s/n: ");
        fflush(stdin);
        resp = getchar();
    }
}

float inversion(float monto, float year, float tasa)
{
    float aux;
    if (year > 0)
    {
        aux = inversion(monto, year - 1, tasa) * (1 + tasa);
    }
    else
    {
        aux = monto;
    }
    return aux;
}