#include <iostream>
#include <time.h>
#include <iomanip>

int *pedirMemArr(int num);
int **pedirMemMat(int num);
void llenar(int *arr, int tam);
void shuffle(int *array, int n);
void imprimirMat(int **mat, int n);
void atom(int *arr, int **mat, int tam);

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    int num, *arr, **mat;
    do
    {
        cout << "Ingresa el tamanio de n: ";
        cin >> num;
    } while (num % 2 != 0 || num <= 1);

    arr = pedirMemArr(num);
    mat = pedirMemMat(num);
    llenar(arr, num);
    cout << endl;
    shuffle(arr, num * num);
    cout << "Revisar que la matriz tiene DOS veces cada numero de 1 a " << (num * num) / 2 << endl;
    atom(arr, mat, num);
    imprimirMat(mat, num);

    return 0;
}

int *pedirMemArr(int num)
{
    return new int[num * num];
}

int **pedirMemMat(int num)
{
    int **aux;
    aux = new int *[num];
    for (int i = 0; i < num; i++)
    {
        aux[i] = new int[num];
    }
    return aux;
}

void llenar(int *arr, int tam)
{
    int j = 1;
    for (int i = 0; i < tam * tam; i += 2)
    {
        arr[i] = j;
        arr[i + 1] = j;
        j++;
    }
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

void atom(int *arr, int **mat, int tam)
{
    int k = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            mat[i][j] = arr[k];
            k++;
        }
    }
}

void imprimirMat(int **mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
}