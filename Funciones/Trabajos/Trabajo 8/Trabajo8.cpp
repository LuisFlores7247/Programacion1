#include <stdio.h>
#include <stdlib.h>

void cuadrado(int n, char c);
void triangulo(int n, char c);
int main(int argc, char *argv[])
{
    printf("Luis David Flores Martinez\n");
    char caracter = argv[2][0], opc = argv[1][0];

    if (opc == 't' || opc == 'T')
    {
        triangulo(atoi(argv[3]), caracter);
    }
    else if (opc == 'c' || opc == 'C')
    {
        cuadrado(atoi(argv[3]), caracter);
    }
    else
    {
        printf("\nFigura no disponible");
    }
    return 0;
}

void cuadrado(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

void triangulo(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}