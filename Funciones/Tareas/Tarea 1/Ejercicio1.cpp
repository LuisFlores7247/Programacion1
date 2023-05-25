#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Luis David Flores Martinez");
    int dec, uni, num;
    char unirom[10], decrom[10];
    char resp;
    do
    {
        // Datos de entrada
        printf("\nDame un numero de dos cifras: ");
        scanf("%d", &num);
        if (num >= 1 && num <= 99)
        {
            dec = num / 10;
            uni = num % 10;
            switch (dec)
            {
            case 0:strcpy(decrom, "");break;
            case 1:strcpy(decrom, "X");break;
            case 2:strcpy(decrom, "XX");break;
            case 3:strcpy(decrom, "XXX");break;
            case 4:strcpy(decrom, "XL");break;
            case 5:strcpy(decrom, "L");break;
            case 6:strcpy(decrom, "LX");break;
            case 7:strcpy(decrom, "LXX");break;
            case 8:strcpy(decrom, "LXXX");break;
            case 9:strcpy(decrom, "XC");break;
            } // cierra switch decenas
            switch (uni)
            {
            case 0:strcpy(unirom, "");break;
            case 1:strcpy(unirom, "I");break;
            case 2:strcpy(unirom, "II");break;
            case 3:strcpy(unirom, "III");break;
            case 4:strcpy(unirom, "IV");break;
            case 5:strcpy(unirom, "V");break;
            case 6:strcpy(unirom, "VI");break;
            case 7:strcpy(unirom, "VII");break;
            case 8:strcpy(unirom, "VIII");break;
            case 9:strcpy(unirom, "IX");break;
            } // cierra switch unidades
            printf("\nNum Romano es: %s%s", decrom, unirom);
        } // cierra la parte verdadera del if
        else
        {
            printf("\nNumero Incorrecto");
        } // cierra parte falsa del if

        printf("\nQuieres consultar otro numero s/n: ");
        fflush(stdin);
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}
