#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// caso 4
float calcularArea(float base, float h);
// caso 3
int aleatorio();
// caso 2
void sumatoria(int n);
// caso 1
void adivina();

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    char res;
    do
    {
        srand(time(0));
        float base, h;
        int n;
        printf("\nAREA\n");

        printf("Ingrese la base:");
        scanf("%f", &base);
        printf("Ingrese la altura:");
        scanf("%f", &h);
        printf("El area es: %.2f\n", calcularArea(base, h));
        printf("\nNUMERO ALEATORIO\n");
        printf("El numero aleatorio es %d\n", aleatorio());
        printf("\nSUMATORIA\n");
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
        sumatoria(n);
        adivina();
        printf("Quieres repetir el programa s/n: ");
        fflush(stdin);
        scanf("%c", &res);
    } while (res == 's');

    return 0;
}

float calcularArea(float base, float h)
{
    return (base * h) / 2;
}

int aleatorio()
{
    int num = 10 + rand() % (50 - 10 + 1);
    return num;
}

void sumatoria(int n)
{
    int acum = 0;
    for (int i = 1; i <= n; i++)
    {
        acum += i;
    }
    printf("La sumatoria de 1 hasta %d es: %d\n", n, acum);
}

void adivina()
{
    printf("\nADIVINA\n");
    int intentos = 1, num;
    int random = 10 + rand() % (50 - 10 + 1);
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num < random && intentos < 6)
        {
            printf("Intenta con un numero mayor\n");
        }
        if (num > random && intentos < 6)
        {
            printf("Intenta con un numero menor\n");
        }
        if (num == random)
        {
            printf("Felicidades, adivinaste en el intento: %d :D\n", intentos);
            break;
        }
        intentos++;
    } while (intentos < 6);
    if (intentos == 6)
    {
        printf("Haz perdido :(\n");
        printf("El numero era %d \n", random);
    }
}