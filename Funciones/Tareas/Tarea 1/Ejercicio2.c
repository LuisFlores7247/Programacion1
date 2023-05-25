#include <stdio.h>  // Para el uso de printf scanf y gets
#include <stdlib.h> // Para el uso de system

int main()
{
    printf("Luis David Flores Martinez");
    // Declaracion de variables
    char nom[25];
    int dias, hab, precio;
    float totalPagar, totalSinDescuento, deduccion, descuento;
    // Datos de entrada
    printf("\nNombre: ");
    gets(nom);
    printf("\nDias: ");
    scanf("%d", &dias);
    do
    {
        printf("\nTipo hab [1..5]");
        scanf("%d", &hab);
    } while (hab < 1 || hab > 5);
    switch (hab)
    {
    // Precios de habitaciones
    case 1:precio = 120;break;
    case 2:precio = 155;break;
    case 3:precio = 210;break;
    case 4:precio = 285;break;
    case 5:precio = 400;break;
    } // Fin del switch
    if (dias > 15)
    {
        if (hab == 5 || hab == 4)
            descuento = 0.20; // Descuento
        else
            descuento = 0.15; // Descuento
    }                         // fin parte verdadera
    else
    {
        if (dias > 10)
            descuento = 0.10; // Descuento
        else
        {
            if (dias > 5)
                descuento = 0.05; // Descuento
            else
                descuento = 0; // No hay descuento
        }
    } // Fin parte falsa
    // Calcular el total a pagar
    totalSinDescuento = dias * precio;
    deduccion = totalSinDescuento * descuento;
    totalPagar = totalSinDescuento - deduccion;
    // DS
    printf("\nRecibo");
    printf("\nNombre = %s", nom);
    printf("\nDias = %d", dias);
    printf("\nTipo hab = %d", hab);
    printf("\nPrecio hab = %d", precio);
    printf("\nDescuento que aplica = %.2f", descuento);
    printf("\nTot sin desc = %.2f", totalSinDescuento);
    printf("\nDescuento = %.2f", deduccion);
    printf("\nTotal = %.2f", totalPagar);

    printf("\n");
    system("pause");
    return 0;
}
