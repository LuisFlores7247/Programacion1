#include <iostream>
#include <time.h>
#include <iomanip>

// MATRICES ESCALONADAS
/* Una matriz escalonada es
aquella en la que cada renglon
tiene una cantidad diferente
de columnas */

using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(0));
    int **prod;
    int *aux;

    int n, d, unidades;

    cout << endl << "Cuantos obreros son: ";
    cin >> n;

    // Crear renglones de la MATRIZ DINAMICA
    prod = new int *[n];
    aux = new int[n]; /* Pedimos casillas para el VECTOR DINAMICO */

    // crear columnas para la matriz dinamica

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        d = 1 + rand() % (7 - 1 + 1);
        cout << endl << "Dias que trabajo el obrero #" << i + 1 << " :" << d << " dias";
        aux[i] = d;
        // Cear tantas columnas como dias de trabajo el obrero
        prod[i] = new int[aux[i]];
    }

    // hasta ahorita lo que tenemos son casillas pero vacias

    // Ingresar la matriz escalonada

    cout << endl << "\nIngresando datos a la matriz escalonada... " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Obrero #" << i + 1 << endl;
        for (int j = 0; j < aux[i]; j++)
        {
            unidades = 8 + rand() % (16 - 8 + 1);
            cout << endl << "Unidades producidas en el dia " << j + 1 << " : " << unidades << " Unidades";
            prod[i][j] = unidades;
        }
    }

    // Imprimir la matriz escalonada
    cout << endl << "\nImprimiendo matriz escalonada... Opcion 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Obrero " << i + 1 << endl;
        for (int j = 0; j < aux[i]; j++)
        {
            cout << endl << "Unidades " << prod[i][j];
        }
        cout << endl;
    }

    // Otra forma de imprimir
    cout << endl << "\nImprimiendo matriz escalonada... Opcion 2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < aux[i]; j++)
        {
            cout << setw(4) << prod[i][j];
        }
        cout << endl;
    }

    return 0;
}
