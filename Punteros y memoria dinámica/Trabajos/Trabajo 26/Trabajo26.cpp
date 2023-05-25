#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // Que es la indireccion multiple?

    /* Es cuando un puntero apunta a otro puntero*/

    /* Este tipo de punteros son utilizados para
    programar diversas estructuras de datos, una de ellas son
    las matrices dinamicas */
    cout<<"Luis David Flores Martinez";
    int **p;
    int *k;
    k = new int;
    *k = 13;
    cout << endl << *k;//vemos 13
    p = &k;/* asignamos a la p la direccion de memoria DONDE esta
              almacenada k */
    cout << endl << **p;//vemos 13
    cout << endl;
    system("Pause");
    return 0;
}
