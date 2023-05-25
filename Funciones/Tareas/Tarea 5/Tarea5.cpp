#include <stdio.h>
#include <stdlib.h>

int menu();
void cifras(int num);
float sueldo(float horas, float pagoHora);
void turnos();

int main(int argc, char const *argv[])
{
    printf("Luis David Flores Martinez");
    char repetir;
    do
    {
        int opc = menu();
        int num;
        float horas, pagoHora;
        switch (opc)
        {
        case 1:
            do
            {
                printf("Ingresa un numero: ");
                scanf("%d", &num);
            } while (num < 100 || num > 999);
            cifras(num);
            break;
        case 2:
            printf("Ingrese las horas trabajadas: ");
            scanf("%f", &horas);
            printf("Ingrese el pago por hora: ");
            scanf("%f", &pagoHora);
            printf("El sueldo es: %.2f\n", sueldo(horas, pagoHora));
            break;
        case 3:
            turnos();
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
        }
        printf("Repetir? ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

int menu()
{
    int opc;
    printf("\n1.- Dividir Numero\n2.- Obtener Sueldo\n3.- Sueldo por turno\nOpcion: ");
    scanf("%d", &opc);
    return opc;
}

void cifras(int num)
{
    int uni, dec, cen;
    uni = num % 10;
    num /= 10;
    dec = (num % 10) * 10;
    num /= 10;
    cen = num * 100;

    printf("Centenas: %d\nDecenas: %d\nUnidades: %d\n", cen, dec, uni);
}

float sueldo(float horas, float pagoHora)
{
    float sueldo;
    if (horas <= 35)
    {
        sueldo = horas * pagoHora;
    }
    if (horas <= 40)
    {
        sueldo = (35 * pagoHora) + ((horas - 35) * 2 * pagoHora);
    }
    else
    {
        sueldo = ((horas - 40) * 3 * pagoHora) + ((horas - 35) * 2 * pagoHora) + (35 * pagoHora);
    }
    if (sueldo < 2000)
    {
        return sueldo;
    }
    if (sueldo >= 2000 && sueldo <= 4000)
    {
        sueldo *= .90;
        return sueldo;
    }
    if (sueldo > 4000)
    {
        sueldo *= .80;
        return sueldo;
    }
}
void turnos()
{
    char nombre[25], turno, dia;
    int horas;
    float sueldo;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese el turno D/N: ");
    fflush(stdin);
    scanf("%c", &turno);
    printf("Es domingo? S/N: ");
    fflush(stdin);
    scanf("%c", &dia);
    if (turno == 'd' || turno == 'D')
    {
        if (dia == 's' || dia == 'S')
        {
            sueldo = (horas * 1100) + 400;
        }
        else
        {
            sueldo = (horas * 800) + 400;
        }
    }
    if (turno == 'n' || turno == 'N')
    {
        if (dia == 's' || dia == 'D')
        {
            sueldo = (horas * 1700) + 400;
        }
        else
        {
            sueldo = (horas * 1200) + 400;
        }
    }
    printf("%s su sueldo es de %.2f\n", nombre, sueldo);
}