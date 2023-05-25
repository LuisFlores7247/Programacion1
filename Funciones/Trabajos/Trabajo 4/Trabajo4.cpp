#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int menu();
void llenar(int vec[TAM]);
void imprimir(int vec[TAM]);
int masGrande(int vec[TAM]);
void buscar(int vec[TAM], int num);

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    srand(time(0));
    int vec[TAM], opc, num;
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            llenar(vec);
            break;
        case 2:
            imprimir(vec);
            break;
        case 3:
            printf("\nEl numero mayor es: %d\n", masGrande(vec));
            break;
        case 4:
            printf("Ingrese el numero a buscar: ");
            scanf("%d", &num);
            buscar(vec, num);
            break;
        case 5:
            printf("Fin del programa");
            break;

        default:
            printf("Opcion incorrecta\n");
            break;
        }
    } while (opc != 5);

    return 0;
}

int menu()
{
    int opc;
    printf("\nMENU");
    printf("\n1.- Llenar");
    printf("\n2.- Imprimir");
    printf("\n3.- Numero mayor");
    printf("\n4.- Buscar numero");
    printf("\n5.- Salir");
    printf("\nOpcion: ");
    scanf("%d", &opc);
    return opc;
}

void llenar(int vec[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        vec[i] = 1 + rand() % (60 - 1 + 1);
    }
    printf("\nVECTOR LLENADO\n");
}

void imprimir(int vec[TAM])
{
    printf("\nVECTOR\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vec[i]);
    }
}

int masGrande(int vec[TAM])
{
    int mayor = vec[0];
    for (int i = 0; i < TAM; i++)
    {
        if (vec[i] > mayor)
        {
            mayor = vec[i];
        }
    }
    return mayor;
}

void buscar(int vec[TAM], int num)
{
    int encontrado = 0;
    for (int i = 0; i < TAM; i++)
    {
        if (vec[i] == num)
        {
            printf("\nNumero encontrado");
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0)
    {
        printf("\nNumero NO encontrado");
    }
}