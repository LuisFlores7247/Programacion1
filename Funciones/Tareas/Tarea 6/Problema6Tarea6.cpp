#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void imprimir(int num, int longitud, int numInv);
int invertir(int num);
int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    int numInv = 0, num;
    for (int i = 1; i < argc; i++)
    {
        num = atoi((argv[i]));
        numInv = invertir(num);
        imprimir(num, strlen(argv[i]), numInv);
        printf("\n");
    }

    return 0;
}

void imprimir(int num, int longitud, int numInv)
{
    int val;
    printf("%d\t", num);
    for (int i = longitud - 1; i >= 0; i--)
    {
        val = numInv % 10;
        numInv /= 10;
        printf("%dx%.0lf ", val, pow(10, i));
    }
}

int invertir(int num)
{
    int numInv = 0, rem;
    while (num != 0)
    {

        rem = num % 10;
        numInv = (numInv * 10) + rem;
        num = num / 10;
    }
    return numInv;
}