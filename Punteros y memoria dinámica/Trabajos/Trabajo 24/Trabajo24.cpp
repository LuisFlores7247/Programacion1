#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(NULL));
    int *v; // puntero para el vector dinamico
    int n;
    cout << endl<< "De que tamanio quiere el vector dinamico: ";
    cin >> n;
    v = new int[n]; // creacion del vector dinamico
    // Llenado del vector
    for (int i = 0; i < n; i++)
    {
        v[i] = 10 + rand() % (50 - 10 + 1);
        // con aritmetica de punteros es asi
        // (v+i)=10+rand()%(50-10+1)
    }
    // Imprimiendo eL vector
    cout << endl << "Imprimiendo vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
        // con aritmetica de punteros es asi
        // cout<<*(v+i)<<" ";
    }

    // Eliminando el espacio asignado al vector dinamico
    delete[] v;
}