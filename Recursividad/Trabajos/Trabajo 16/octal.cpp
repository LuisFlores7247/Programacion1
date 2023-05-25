#include <stdio.h>
#include <math.h>

int cambiaraoctal(int n, int i);

int main()
{
    printf("Luis David Flores Martinez");
    char resp = 's';
    int num, base8;

    while (resp == 's')
    {

        printf("\nIngresa un numero en base 10: ");
        scanf("%d", &num);
        base8 = cambiaraoctal(num, 0);

        printf("\nEl %d en base octal es %d\n", num, base8);

        printf("\nQuieres repetir el programa? s/n: ");
        fflush(stdin);
        resp = getchar();
    }
    return 0;
}

int cambiaraoctal(int n, int i)
{
    int coc, residuo, res;

    coc = n / 8;
    residuo = n % 8;

    if (coc != 0)
    {
        res = (residuo * pow(10, i)) + cambiaraoctal(coc, i + 1);
    }
    else
    {
        res = residuo * pow(10, i);
    }

    return res;
}