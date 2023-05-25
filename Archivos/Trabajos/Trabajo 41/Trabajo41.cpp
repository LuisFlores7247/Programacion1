#include <iostream>
#include <fstream>
#include <string.h>

int imprimir();

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez\n\n";
    int total;
    total = imprimir();
    cout << endl << "El total de renglones es: " << total;
    return 0;
}

int imprimir()
{
    fstream file;
    char linea[100];
    int renglones = 0, palabras;
    file.open("texto.txt", ios::in);
    while (file.getline(linea, 100))
    {
        palabras = 0;
        cout << linea;
        for (int i = 0; i < strlen(linea); i++)
        {
            if(linea[i] == ' '){
                palabras++;
            }
        }
        cout << " " << palabras+1<< endl;
        renglones++;
    }
    file.close();
    return renglones;
}