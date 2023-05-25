#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // MATRICES DINAMICAS
    cout<<"Luis David Flores Martinez";
    int **m1;
    int r,c,j,i;
    cout<<endl;
    cout<<"De cuantos Renglones = ";
    cin>>r;
    cout<<"De cuantos Columnas = ";
    cin>>c;

    // Formando el cascaron de la matriz, solo los espacian
    m1 = new int *[r]; // Creacion del vector de apuntadores

    // Creando las columnas la matriz
    for (int i = 0; i < r; i++)
    {
        m1[i]=new int [c]; //Se crean vectores dinamicos para cada renglon
    }
    // Captura de datos de matriz
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m1[i][j] = 10 + rand()%(90-10+1);
        }
    }

    // Imprimir la matriz dinamica
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<setw(4)<<m1[i][j];
        }
        cout<<endl;
    }
    
    

    return 0;
}
