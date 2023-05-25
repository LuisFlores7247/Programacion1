#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstring>


void llenar(char **nombres, int ren);
void imprimir(char *nombres[], int ren);
char **pedirEspacio(int ren, int col);
void ordenar(char **nombres, int ren, int col);

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Luis David Flores Martinez"<<endl;
    srand(time(0));
    char **nombres;

    int n, ren;
    cout << endl << "Cuantos nombres quieres guardar: ";
    cin >> n;
    nombres = pedirEspacio(n,30);

    llenar(nombres, n);
    ordenar(nombres, n, 30);
    imprimir(nombres, n);
    return 0;
}

char **pedirEspacio(int ren, int col){
    char  **aux;
    aux = new char *[ren];
    for (int i = 0; i < ren; i++)
    {
        aux[i] = new char [col];
    }
    return aux;
}

void llenar(char **nombres, int ren){

    char nom[][30] = {"Betty", "Karla", "Luis", "Memo", "Rogelio",
    "Lalo", "Gina", "Angel", "Fer", "Ana", "Quique", "Beto", "Jenny",
    "Pao", "Susy"};

    int posicion;
    for (int i = 0; i < ren; i++)
    {
        posicion = rand()%(14-0+1);
        strcpy(nombres[i],nom[posicion]);
    }

}
void ordenar(char **nombres, int ren, int col){
    char aux[30];
    for (int i = 0; i < ren-1; i++)
    {
        for (int j = 0; j < ren-1; j++)
        {
            if (strcmp(nombres [j],nombres[j+1])>0)
            {
                strcpy(aux,nombres[j]);
                strcpy(nombres[j],nombres[j+1]);
                strcpy(nombres[j+1],aux);
                

            }
            
        }
        
    }
    
}

void imprimir(char *nombres[], int ren){
    cout<<endl<<"Imprimiendo nombres"<<endl;
    for (int i = 0; i < ren; i++)
    {
        cout<<endl<<i+1<<" "<<nombres[i];
    }
    
}