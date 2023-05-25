#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez\n");
    float calif = 0;
    for (int i = 2; i < argc; i++)
    {
        calif += atof(argv[i]);
    }
    calif = (calif / (argc - 2));
    printf("Hola %s, tu calificacion es %.2f\n", argv[1], calif);
    if (calif >= 6.00)
    {
        printf("Estas Aprobado");
    }
    else
    {
        printf("Estas Reprobado");
    }

    return 0;
}
