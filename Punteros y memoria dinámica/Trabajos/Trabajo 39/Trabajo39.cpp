// Autor: GSP
/*   LEER EN UN ARCHIVO DE TEXTO CARACTER POR CARACTER*/

#include <iostream>
#include <fstream> //necesaria para el manejo de archivos
#include <windows.h>
using namespace std;

int main()
{
    cout << "Luis David Flores Martinez" << endl; 
    int total[5] = {0, 0, 0, 0, 0};
    char vocales[5] = {'a','e','i','o','u'};
    fstream file;
    char c;
    file.open("datos.txt", ios::in);
    file.clear();
    file.seekg(0);
    if (!file)
        cout << " No se pudo leer el archivo " << endl;
    else
    {

        while (file.get(c))
        {
            switch (c)
            {
            case 'a':
            case 'A':
                total[0]++;
                break;
            case 'e':
            case 'E':
                total[1]++;
                break;
            case 'i':
            case 'I':
                total[2]++;
                break;
            case 'o':
            case 'O':
                total[3]++;
                break;
            case 'u':
            case 'U':
                total[4]++;
                break;
            }
            cout << c;
            Sleep(150);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Las veces que aparece la vocal '" << vocales[i] << "' son  " << total[i];
    }
    
    file.close();

    cout << endl;
    system("pause");
    return 0;
} // fin del main()
