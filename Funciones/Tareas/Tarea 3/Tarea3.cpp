#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void capturarpassw();

int main()
{
    capturarpassw();
    return 0;
}

void capturarpassw()
{
    printf("Luis David Flores Martinez\n");
    int intentos = 0;
    int passwd;
    do
    {
        printf("Ingrese la contrasenia:");
        scanf("%d", &passwd);
        if (passwd == 12345)
        {
            printf("\n¡Bienvenido!");
            break;
        }
        else
        {
            printf("\nError en la contrasenia\n");
            intentos++;
        }

    } while (intentos < 3);
    if (intentos == 3)
    {
        printf("\nOportunidades agotadas");
    }
}