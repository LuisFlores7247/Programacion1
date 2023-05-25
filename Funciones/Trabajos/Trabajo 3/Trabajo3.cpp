#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define REN 5
#define COL 6

float serie(int x, int n);
int retiro();
void llenar(int m[REN][COL]);
int main()
{
    srand(time(0));
    int x, n, m[REN][COL];
    char opc;
    printf("Luis David Flores Martinez\n");
    do
    {
        printf("SERIE\n");
        printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
        printf("Suma de la serie: %.2f", serie(x, n));

        printf("\n\nRETIRO\n");
        printf("La cantidad a retirar es: %d", retiro());

        printf("\n\nMATRIZ\n");
        llenar(m);
        printf("Deseas repetir el programa s/n: ");
        fflush(stdin);
        scanf("%c", opc);
    } while (opc == 's');

    return 0;
}

float serie(int x, int n)
{
    float suma = 1;
    for (int i = 1; i <= n; i++)
    {
        suma += 1 / pow(x, i);
    }
    return suma;
}

int retiro()
{
    int cant;
    do
    {
        printf("Ingrese la cantidad a retirar: ");
        scanf("%d", &cant);
    } while (cant % 100 != 0 || cant > 6000);
    return cant;
}

void llenar(int m[REN][COL])
{
    int random, i = 0, j = 0;

    do
    {
        random = 1 + rand() % (100 - 1 + 1);
        if (random % 5 == 0)
        {
            m[i][j] = random;
            printf("%d ", m[i][j]);
            j++;
            if (j == COL)
            {
                printf("\n");
                i++;
                j = 0;
            }
        }

    } while (i < REN && j < COL);
}