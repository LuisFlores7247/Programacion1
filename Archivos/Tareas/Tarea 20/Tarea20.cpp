#define ARCHIVO_ORIGINAL "original.cpp"
#define ARCHIVO_COPIA "copia.cpp"

#include <iostream>
#include <fstream>

using namespace std;

void eliminar();

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    eliminar();
    return 0;
}

void eliminar()
{
    fstream fileR, fileW;
    fileR.open(ARCHIVO_ORIGINAL, ios::in);
    fileW.open(ARCHIVO_COPIA, ios::out);
    char c, aux;
    bool isComment = false;

    while (fileR.get(c)) {
        if (!isComment) {
            if (aux == '/' && c == '*') {
                isComment = true;
                fileW.seekp(-1, ios::cur);
            } else {
                cout << c;
                fileW << c;
            }
        } else {
            if (aux == '*' && c == '/') {
                isComment = false;
            }
        }
        aux = c;
    }
    fileR.close();
    fileW.close();
    cout << "Se ha copiado correctamente";
}