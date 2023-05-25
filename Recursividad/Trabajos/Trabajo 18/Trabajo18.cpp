#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 6

int binarioAdecimal(char cad[], int i);
int multiplica(int vec[TAM], int i);
int MayorDivisor(int x, int y);
int invertir(int num, int tam);

int main(int argc, char const *argv[])
{
    printf("Integrantes del equipo:\nAdal Yahir de Luna Nieves\nJaime Ivan Lopez Gutierrez\nDiego Ivan Salas Pedroza\nLuis Alberto Pedroza Diaz\nLuis David Flores Martinez");
    char num[20], cad[20], res;
    int vec[TAM] = {2, 4, 6, 8, 15, 12}, producto, num1, num2, resul, opc, numero, alreves, tam;
    do
    {
        do
        {
            printf("\n\tMenu\n1.- Numero al reves\n2.- Binario a decimal\n3.- Multiplicacion\n4.- Maximo comun divisor\n5.- Salir");
            printf("\nOpcion: ");
            scanf("%d", &opc);
        } while (opc < 1 || opc > 5);

        switch (opc)
        {
        case 1:
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
            itoa(numero, cad, 10);
            tam = strlen(cad) - 1;
            alreves = invertir(numero, tam);
            printf("El numero %d alreves es %d \n", numero, alreves);
            break;
        case 2:
            printf("Ingrese el numero en binario: ");
            fflush(stdin);
            scanf("%s", num);
            printf("El numero %s a decimal es: %d", num, binarioAdecimal(strrev(num), strlen(num) - 1));
            break;
        case 3:
            producto = multiplica(vec, TAM - 1);
            printf("\nEl resultado de multiplicar los elementos del es: %d\n", producto);
            break;
        case 4:
            printf("Dame un numero: ");
            scanf("%d", &num1);
            printf("Dame otro numero: ");
            scanf("%d", &num2);
            resul = MayorDivisor(num1, num2);
            printf("El minimo comun divisor es: %d", resul);
            break;
        case 5:
            res = 'n';
            break;
        default:
            printf("\nOpcion incorrecta\n");
            break;
        }
        printf("\nDeseas repetir s/n: ");
        fflush(stdin);
        scanf("%c", &res);
    } while (res == 's' && opc != 5);

    return 0;
}

int binarioAdecimal(char cad[], int i)
{
    int n, num = 0;
    if (i >= 0)
    {
        if (cad[i] == '1')
        {
            n = 1 * pow(2, i);
        }
        else
        {
            n = 0;
        }
        num += n + binarioAdecimal(cad, i - 1);
    }
    return num;
}

int multiplica(int vec[TAM], int i)
{
    int aux;
    if (i > 0)
    {
        aux = vec[i] * multiplica(vec, i - 1);
    }
    else
    {
        aux = vec[0];
    }
    return aux;
}

int MayorDivisor(int x, int y)
{

    if (y == 0)
    {
        return x;
    }
    else
    {
        return MayorDivisor(y, x % y);
    }
}

int invertir(int num, int tam)
{
    int aux;
    if (tam > 0)
    {
        aux = num % 10 * pow(10, tam) + invertir(num / 10, tam - 1);
    }
    else
    {
        aux = num % 10;
    }
    return aux;
}