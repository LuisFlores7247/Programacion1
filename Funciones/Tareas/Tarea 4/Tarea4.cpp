#include <stdio.h>
#include <stdlib.h>

int zonaA(int totalVentas);
int zonaB(int totalVentas);
int zonaC(int totalVentas);
int main(int argc, char const *argv[])
{
    int totalVentas = 0, ventasA = 0, ventasB, ventasC, total;
    printf("Luis David Flores Martinez\n");
    char opc;
    do
    {
        ventasA = zonaA(totalVentas);
        totalVentas += ventasA;
        ventasB = zonaB(totalVentas);
        totalVentas += ventasB;
        ventasC = zonaC(totalVentas);
        totalVentas += ventasC;
        total = (ventasA * 200) + (ventasB * 300) + (ventasC * 450);
        printf("El total es:  %d\n", total);
        if (totalVentas < 3000)
        {
            printf("Deseas realizar otra venta? s/n\n");
            fflush(stdin);
            scanf("%c", &opc);
        }
        else
        {
            break;
        }
    } while (opc == 's' && totalVentas < 3000);
    if (totalVentas == 3000)
    {
        printf("Los asientos se han agotado");
    }
    printf("\nLa cantidad de asientos ocupados es de %d", totalVentas);

    return 0;
}

int zonaA(int totalVentas)
{
    int cant;
    if (totalVentas < 3000)
    {
        printf("Cantidad de boletos zona A: ");
        scanf("%d", &cant);
        return cant;
    }
    else
    {
        printf("No hay asientos disponibles :(\n");
    }
}
int zonaB(int totalVentas)
{
    int cant;
    if (totalVentas < 3000)
    {
        printf("Cantidad de boletos zona B: ");
        scanf("%d", &cant);
        return cant;
    }
    else
    {
        printf("No hay asientos disponibles :(\n");
    }
}
int zonaC(int totalVentas)
{
    int cant;
    if (totalVentas < 3000)
    {
        printf("Cantidad de boletos zona C: ");
        scanf("%d", &cant);
        return cant;
    }
    else
    {
        printf("No hay asientos disponibles :(\n");
    }
}