#include <iostream>
#include <time.h>
#include <iomanip>

int *crearvector(int tam);                // crea las casillas para el vector dinamico
void llenarsinrepetidos(int *v, int tam); // llena el vector dinámico sin repetidos en un rango entre
void imprimirvector(int *v, int tam);     // imprime el vector
void shuffle(int *array, int n);          // revuelve el vector

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int tam, *array;
    char res, rep;
    do
    {
        do
        {
            cout << "Ingrese el tamanio del vector: ";
            cin >> tam;
        } while (tam < 8 || tam > 15);

        array = crearvector(tam);
        llenarsinrepetidos(array, tam);
        imprimirvector(array, tam);
        cout << "Deseas revolver? s/n ";
        cin >> rep;
        while (rep == 's')
        {
            cout << endl;
            shuffle(array, tam);
            imprimirvector(array, tam);
            cout << "Deseas revolver? s/n ";
            cin >> rep;
        }

        cout << "Deseas repetir? s/n ";
        cin >> res;
    } while (res == 's');

    delete[] array;
    return 0;
}

int *crearvector(int tam)
{
    return new int[tam];
}
void llenarsinrepetidos(int *v, int tam)
{
    int num, flag, k;
    num = 1 + rand() % (30 - 1 + 1);
    do
    {
        for (int i = 0; i < tam; i++)
        {
            if (v[i] == num)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            num = 1 + rand() % (30 - 1 + 1);
        }
        else
        {
            v[k] = num;
            k++;
        }
    } while (k < tam);
}

void imprimirvector(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void shuffle(int *array, int n)
{
    srand(time(NULL));
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}