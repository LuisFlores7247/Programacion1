#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 5

void hexadecimal(int num);
void matriz(int m[TAM][TAM], int i, int j);

int main(int argc, char const *argv[])
{
    char opc;
    printf("Luis David Flores Martinez\n");
    do
    {
        int m[TAM][TAM], num;
        srand(time(0));
        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                m[i][j] = 1 + rand() % (9 - 1 + 1);
            }
        }

        matriz(m, 0, 0);
        printf("Ingrese el valor a convertir: ");
        scanf("%d", &num);
        hexadecimal(num);
        printf("\nDesea volver a repetir? S/N: ");
        fflush(stdin);
        scanf("%c", &opc);
    } while (opc == 's' || opc == 'S');

    return 0;
}

void hexadecimal(int num)
{

    int residuo, cociente;
    residuo = num % 16;
    cociente = num / 16;
    if (residuo % 16 != 0)
    {
        hexadecimal(cociente);
    }
    switch (residuo)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("%d", residuo);
        break;
    case 10:
        printf("A");
        break;
    case 11:
        printf("B");
        break;
    case 12:
        printf("C");
        break;
    case 13:
        printf("D");
        break;
    case 14:
        printf("E");
        break;
    case 15:
        printf("F");
        break;
    }
}

void matriz(int m[TAM][TAM], int i, int j)
{
    if (i < TAM && j < TAM)
    {
        printf("%d ", m[i][j]);
        if (j <= TAM)
        {
            if (j == TAM - 1)
            {
                printf("\n");
                j = 0;
                matriz(m, i + 1, j);
            }
            else
            {
                matriz(m, i, j + 1);
            }
        }
    }
}