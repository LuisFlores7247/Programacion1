#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tabla(int n, int i);
void imprimirInvertido(char cad[30], int indice);
void menu(int opc);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    menu(0);
    return 0;
}

void tabla(int n, int i)
{
    printf("%d x %d = %d\n", n, i, n * i);
    if (i < 10)
    {
        tabla(n, i + 1);
    }
}
void imprimirInvertido(char cad[30], int indice)
{
    printf("%c", cad[indice]);
    if (indice > 0)
    {
        imprimirInvertido(cad, indice - 1);
    }
}
void menu(int opc)
{
    char cad[30];
    int n;
    if (opc != 3)
    {
        do
        {
            printf("\n1.- Tabla\n2.- Cadena\n3.- Salir\nOpcion: ");
            scanf("%d", &opc);
            switch (opc)
            {
            case 1:
                printf("Ingrese un numero: ");
                scanf("%d", &n);
                tabla(n, 1);
                break;
            case 2:
                printf("Ingrese una cadena: ");
                fflush(stdin);
                scanf("%s", cad);
                imprimirInvertido(cad, strlen(cad) - 1);
                break;
            }
        } while (opc < 1 || opc > 3);
        menu(opc);
    }
}