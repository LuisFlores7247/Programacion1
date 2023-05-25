#include <stdio.h>

int sumatoriadigitos(int num);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    char resp = 's';
    int num, total;
    while (resp == 's')
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        total = sumatoriadigitos(num);
        printf("\nLa suma de los digitos de %d es %d", num, total);

        printf("\nQuieres repetir el programa s/n: ");
        fflush(stdin);
        resp = getchar();
    }

    return 0;
}

int sumatoriadigitos(int num)
{
    int cociente, residuo, aux;
    residuo = num % 10;
    cociente = num / 10;
    if (cociente != 0)
    {
        aux = residuo + sumatoriadigitos(cociente);
    }
    else
    {
        aux = residuo;
    }
    return aux;
}
