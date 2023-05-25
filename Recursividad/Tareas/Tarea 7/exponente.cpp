#include <stdio.h>
#include <math.h>

int serie(int num);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    char resp = 's';
    int n, res;
    while (resp == 's')
    {
        printf("Ingrese el exponente hasta el que la serie debe llegar: ");
        scanf("%d", &n);
        res = serie(n);
        printf("Resultado de la serie: %d\n", res);

        printf("\nQuieres repetir el programa s/n: ");
        fflush(stdin);
        resp = getchar();
    }

    return 0;
}

int serie(int num)
{
    int aux;
    if (num > 1)
    {
        aux = pow(num, num) + serie(num - 1);
    }
    else
    {
        aux = 1;
    }
    return aux;
}
