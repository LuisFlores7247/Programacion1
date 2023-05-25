#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream file;
    string palabra;
    int palabras = 0;
    cout << "Luis David Flores Martinez" << endl;
    file.open("texto.txt",ios::in);

    while (file>>palabra)
    {
        cout << palabra << " ";
        palabras++;
    }
    
    cout << endl << "El total de palabras impresas es de: "  << palabras << endl;
    file.close();
    return 0;
}
