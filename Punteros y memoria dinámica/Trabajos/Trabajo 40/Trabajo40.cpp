#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    fstream fileR, fileW;
    char c;
    int total=0;

    fileR.open("original.txt", ios::in);
    fileW.open("copia.txt", ios::out);

    while (fileR.get(c))
    {
        cout << c;
        fileW.put(c);
        total++;
        Sleep(100);
    }
    
    cout << endl << "Total de caracteres copiados: " << total;
    return 0;
}
