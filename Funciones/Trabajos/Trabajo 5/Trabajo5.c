#include <stdio.h>
#include <stdlib.h> //para atoi y atof

/*Uso de char y char[]
    uso de atoi y atof*/
int main()
{
    printf("Luis David Flores Martinez\n");
    // atoi -> Cambia de cadena a numero
    char cad[] = "3456"; // Declarando e inicializando
    // Directamente da oportunidad de dejar corchetes vacios
    int num;
    num = atoi(cad);
    printf("res=%d\n", num + 1);

    char cad2[] = "45.67";
    float num2;
    num2 = atof(cad2);
    printf("res=%.2f\n", num2 + 3);

    printf("Dame un numero: ");
    fflush(stdin);
    gets(cad2);
    num2 = atof(cad2);
    printf("res=%.2f\n", num2 + 3);

    // Uso de cadenas

    char cd[30];
    char nom[40];

    // Opción uno
    printf("Dame una ciudad: ");
    fflush(stdin);
    gets(cd); // Esta es la mejor opción

    // Opción dos
    printf("Dame un nombre: ");
    fflush(stdin);
    scanf("%s", nom); // No lleva &

    // imprimir
    // Opción uno
    printf("La ciudad es %s\n", cd);
    // Opción dos
    printf("El nombre ingresado es: ");
    puts(nom);

    // Uso del Char
    char op1, op2; // Solo almacena un caracter

    // Opción 1
    printf("Dame un caracter\n");
    fflush(stdin);
    op1 = getchar();

    // Opción2
    printf("Dame un caracter\n");
    fflush(stdin);
    scanf("%c", &op2);

    // Imprimir
    // Opción 1
    printf("Tu primer caracter fue: %c\n", op1);
    // Opción 2
    printf("Imprimiendo con putchar la segunda opcion: ");
    putchar(op2);

    return 0;
}