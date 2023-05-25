#include <iostream>
#include <iomanip>

using namespace std;

struct producto
{
    char nomProducto[40];
    int existencias;
    float precio;

    struct proovedor
    {
        char nomProveedor[40];
        int idProveedor;
    } prov;
};

producto llenar();
void imprimir(producto prod);

int main()
{
    producto prod;
    cout << "Luis David Flores Martinez" << endl;
    prod = llenar();
    imprimir(prod);
    return 0;
}
producto llenar()
{
    producto aux;
    cout << "Ingresa el nombre del producto: ";
    cin.getline(aux.nomProducto, 40);
    cout << "Ingresa la existencia: ";
    cin >> aux.existencias;
    cout << "Ingresa el precio: ";
    cin >> aux.precio;

    cout << "Ingresa el nombre del proveedor: ";
    fflush(stdin);
    cin.getline(aux.prov.nomProveedor, 40);
    cout << "Id proveedor: ";
    cin >> aux.prov.idProveedor;

    return aux;
}
void imprimir(producto prod)
{
    cout << "\nDatos del producto" << endl;
    cout << "Nombre: " << prod.nomProducto << endl;
    cout << "Existencia: " << prod.existencias << endl;
    cout << "Precio: " << prod.precio << endl;
    cout << "Proveedor: " << prod.prov.nomProveedor << endl;
    cout << "Id del proveedor: " << prod.prov.idProveedor << endl;
}
