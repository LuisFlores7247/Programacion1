#include <iostream>
#define TAM 4

using namespace std;

struct producto
{
    char nomproducto[40];
    int existencias;
    float precio;

    struct proveedor
    {
        char nomproveedor[40];
        int idProveedor;
    } prov;
};

void llenarArreglo(producto tienda[]);
void imprimirArreglo(producto tienda[]);

int main()
{
    cout << "Luis David Flores Martinez" << endl;
    producto tienda[TAM];
    llenarArreglo(tienda);
    imprimirArreglo(tienda);

    return 0;
}

void llenarArreglo(producto tienda[])
{
    cout << endl << "Llenando el arreglo de estructuras tienda...\n";
    for (int i = 0; i < TAM; i++)
    {
        fflush(stdin);
        cout << endl << "Nombre del producto: ";
        cin.getline(tienda[i].nomproducto, 40);
        cout << endl << "Existencias: ";
        cin >> tienda[i].existencias;
        cout << endl << "Precio: ";
        cin >> tienda[i].precio;

        cout << endl << "Nombre del proveedor: ";
        fflush(stdin);
        cin.getline(tienda[i].prov.nomproveedor, 40);
        cout << endl << "id proveedor: ";
        cin >> tienda[i].prov.idProveedor;
    }
}
void imprimirArreglo(producto tienda[])
{
    cout << endl << "\nImprimiendo el arreglo de estructuras tienda...\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << endl << "#" << i + 1;
        cout << endl << "Producto: " << tienda[i].nomproducto;
        cout << endl << "Existencias: " << tienda[i].existencias;
        cout << endl << "Precio: " << tienda[i].precio;
        cout << endl << "Nombre Proveedor: " << tienda[i].prov.nomproveedor;
        cout << endl << "Id Proveedor: " << tienda[i].prov.idProveedor;
    }
}