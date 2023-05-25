#include <stdio.h>

int digitos(int num);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    char resp = 's';
    int num, total;
    while (resp == 's')
    {
        printf("Ingresa un numero: ");
        scanf("%d", &num);
        total = digitos(num);
        printf("\nEl numero %d tiene %d digitos\n", num, total);

        printf("\nQuieres repetir el programa s/n:");
        fflush(stdin);
        resp = getchar();
    }

    return 0;
}

int digitos(int num)
{
    int cociente, aux;
    cociente = num / 10;
    if (cociente != 0)
    {
        aux = 1 + digitos(cociente);
    }
    else
    {
        aux = 1;
    }
    return aux;
}
