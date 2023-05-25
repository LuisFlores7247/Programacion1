#include <iostream>
#include <time.h>

using namespace std;

void llenarsinrepetidos(int *v, int tam);
void imprimir(int *v, int tam);
int *inter(int *v1, int *v2, int n1, int n2, int *total);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));
    int *v1, *v2, *v3, *total, flag=0;
    int n1, n2;

    cout << "Ingrese el tamanio del vector 1:";
    cin >> n1;
    v1 = new int[n1];
    llenarsinrepetidos(v1, n1);

    cout << "Ingrese el tamanio del vector 2:";
    cin >> n2;
    v2 = new int[n2];
    llenarsinrepetidos(v2, n2);

    cout << endl << "VECTOR 1" << endl;
    imprimir(v1, n1);
    cout << endl;
    cout << endl << "VECTOR 2" << endl;
    imprimir(v2, n2);
    cout << endl;

    cout << endl << "INTERESECCION" << endl;
    v3 = inter(v1, v2, n1, n2, total);
    
    
    if (n1 > n2)
    {
        for (int i = 0; i < n2; i++)
        {
            if (v3[i]>=1 && v3[i] <= 15)
            {
                flag = 1;
            }
            
        }
        if (flag == 0)
        {
            cout << endl << "No hay interseccion" << endl;
        }else{
            cout << endl << "VECTOR 3" << endl;
            imprimir(v3, n2);
        }
        
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            if (v3[i]>=1 && v3[i] <= 15)
            {
                flag = 1;
            }
            
        }
        if (flag == 0)
        {
            cout << endl << "No hay interseccion" << endl;
        }else{
            cout << endl << "VECTOR 3" << endl;
            imprimir(v3, n2);
        }
        imprimir(v3, n1);
    }
    delete []v1;
    delete []v2;
    delete []v3;
    return 0;
}

void imprimir(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (v[i]<15 && v[i]>1)
        {
            cout << v[i] << " ";
        }
    }
}

void llenarsinrepetidos(int *v, int tam)
{
    int num, flag, k;
    num = 1 + rand() % (15 - 1 + 1);
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
            num = 1 + rand() % (15 - 1 + 1);
        }
        else
        {
            v[k] = num;
            k++;
        }
    } while (k < tam);
}

int *inter(int *v1, int *v2, int n1, int n2, int *total)
{
    int *v3, k = 0, aux=0;
    if (n1 > n2)
    {
        v3 = new int[n2];

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (v1[i] == v2[j])
                {
                    v3[k] = v2[j];
                    k++;
                }
                else
                {
                    v3[k] = 0;
                }
            }
        }
        for (int i = 0; i < n2; i++)
        {
            if (v3[i] > 0 && v3[i] < 15)
            {
                aux++;
            }
            
        }
        total = &aux;
    }
    else
    {
        v3 = new int[n1];

        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (v2[i] == v1[j])
                {
                    v3[k] = v1[j];
                    k++;
                }
                else
                {
                    v3[k] = 0;
                }
            }
        }
        for (int i = 0; i < n1; i++)
        {
            if (v3[i] > 0 && v3[i] < 15)
            {
                aux++;
            }
            
        }
        total = &aux;
    }
    cout << "Numero de intersecciones: " << *total << endl;
    return v3;
}