#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Luis David Flores Martinez\n");
    // declarando variables locales
    int num, cont, acum, n, i;
    printf("Dame el valor de n: ");
    scanf("%d", &n);
    i = 1; // contador iniciado en 1
    do
    {
        // proceso
        cont = 1;
        acum = 0;
        // proceso
        do
        {
            if (i % cont == 0)
            {
                acum = acum + cont;
            }
            cont = cont + 1;
        } while (cont <= i - 1);
        // datos de salida
        if (acum == i)
        {
            printf("\n%d Numero perfecto", i);
        }
        else
        {
            printf("\n%d Numero imperfecto", i);
        }
        i = i + 1;

    } while (i <= n);

    return 0;
}
