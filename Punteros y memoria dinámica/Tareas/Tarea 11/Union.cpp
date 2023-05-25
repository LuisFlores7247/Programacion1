#include <iostream>
#include <ctime>

int *pideMemoria(int tam);
int llenar(int *v, int tam);
int imprimir(int *v, int tam);
int *unir(int *v1, int *v2, int t1, int t2);

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;

    srand(time(0));
    int *v1, *v2, *v3;
    int t1, t2;
    cout << "Ingrese el tamanio del vector 1: ";
    cin >> t1;
    cout << "Ingrese el tamanio del vector 2: ";
    cin >> t2;

    v1 = pideMemoria(t1);
    v2 = pideMemoria(t2);

    llenar(v1, t1);
    llenar(v2, t2);

    cout << endl << "VECTOR 1" << endl;
    imprimir(v1, t1);
    cout << endl << "VECTOR 2" << endl;
    imprimir(v2, t2);

    v3 = unir(v1, v2, t1, t2);
    
    cout << endl << "VECTOR 3" << endl;
    imprimir(v3, t1 + t2);

    delete []v1;
    delete []v2;
    delete []v3;
    return 0;
}

int *pideMemoria(int tam)
{
    return new int[tam];
}

int llenar(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *(v + i) = 10 + rand() % (90 + 1 - 10);
    }
}

int imprimir(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << *(v + i) << " ";
    }
    cout << endl;
}

int *unir(int *v1, int *v2, int t1, int t2)
{
    int *aux;
    aux = new int[t1 + t2];
    for (int i = 0; i < t1; i++)
    {
        *(aux + i) = *(v1 + i);
    }
    int j = 0;
    for (int i = t1; i < t1 + t2; i++)
    {
        *(aux + i) = *(v2 + j);
        j++;
    }
    return aux;
}