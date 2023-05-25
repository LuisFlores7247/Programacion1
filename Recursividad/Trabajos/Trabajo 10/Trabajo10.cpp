#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    int num = 2345;
    int tam;
    char cad[20];
    itoa(num, cad, 10);
    printf("\nEl numero convertido a cadena es %s", cad);
    tam = strlen(cad);
    printf("\nEl total de caracteres de la cadena es %d por lo tanto %d tiene %d digitos", tam, num, tam);

    printf("\nDame un numero: ");
    scanf("%d", &num);
    itoa(num, cad, 10);
    printf("\nEl numero convertido a cadena es %s", cad);
    tam = strlen(cad);
    printf("\nEl total de caracteres de la cadena es %d por lo tanto %d tiene %d digitos", tam, num, tam);

    return 0;
}
