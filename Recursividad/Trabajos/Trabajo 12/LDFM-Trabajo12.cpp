
#include <stdio.h>

void invertir(int n);
void binario(int n);
void menu(int opc);

int main()
{
    int num;
    printf("Luis David Flores Martinez\n");
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    invertir(num);
    printf("\n");
    menu(0);
    printf("\n");
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    binario(num);
    return 0;
} // fin main

// implementar las funciones

void menu(int opc)
{
    if (opc != 3)
    {
        do
        {
            printf("1.- Altas\n");
            printf("2.- Bajas\n");
            printf("3.- Salir\n");
            printf("Que opcion quieres: ");
            scanf("%d", &opc);

        } while (opc < 1 || opc > 3);
        switch (opc)
        {
        case 1:
            printf("Elegiste Altas\n");
            break;
        case 2:
            printf("Elegiste Bajas\n");
            break;
        case 3:
            printf("Elegiste Salir\n");
            break;
        }
        menu(opc);
    }
}

void invertir(int n)
{
    printf("%d", n % 10);
    if (n / 10 != 0)
    {
        invertir(n / 10);
    }
}

void binario(int n)
{
    if (n / 2 != 0)
    {
        binario(n / 2);
    }
    printf("%d", n % 2);
}
