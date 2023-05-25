#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Luis David Flores Martinez");
    // declaracion de variables locales
    int clave;
    char resp;
    float minutos, precio, total;
    do
    {
        printf("\nIngrese el total de minutos hablados: ");
        scanf("%f", &minutos);
        // validar la clave
        do
        {
            printf("\nIngrese la clave de su zona 12/15/18/19: ");
            scanf("%d", &clave);
        } while (clave != 12 && clave != 15 && clave != 18 && clave != 19);
        // obtener la tarifa total de acuerdo a la clave
        switch (clave)
        {
        case 12: precio = 2.0; break;
        case 15: precio = 2.2; break;
        case 18: precio = 4.5; break;
        case 19: precio = 3.5; break;
        }
        // obtener el costo de la llamada
        total = minutos * precio;
        // datos de salida
        printf("\nEl costo de su llamada fue de %.2f", total);
        printf("\nDeseas calcular el costo de otra llamada s/n: ");
        fflush(stdin);
        scanf("%c", &resp);

    } while (resp == 's');

    return 0;
}
