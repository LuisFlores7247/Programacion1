#include <iostream>

#define TAM 5
using namespace std;

void llenar1(int *);
void imprimir1(int *);
void llenar2(int *);
void imprimir2(int *);

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez";
    int vec[TAM];
    llenar1(vec);
    imprimir1(vec);
    llenar2(vec);
    imprimir2(vec);
    return 0;
}

void imprimir1(int *vec)
{
    cout << "\nImprimir usando sintaxis de corchetes\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << vec[i] << " ";
    }
}

void imprimir2(int *vec)
{
    cout << "\nImprimir usando aritmetica de punteros\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << *(vec + i) << " ";
    }
}

void llenar1(int *vec)
{
    cout << "\nLlenar usando sintaxis de corchetes\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << "Dame un valor: ";
        cin >> vec[i];
    }
}
void llenar2(int *vec)
{
    cout << "\nLlenar usando aritmetica de punteros\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << "Dame un valor: ";
        cin >> *(vec + i);
    }
}