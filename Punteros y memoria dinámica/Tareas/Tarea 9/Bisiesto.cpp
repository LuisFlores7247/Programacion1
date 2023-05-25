#include <iostream>
#include <cstdlib>

using namespace std;

bool bisiesto(int year);

int main()
{
    int year, opc;
    cout << endl << "Luis David Flores Martinez";
    do
    {
        cout << endl << "Introduce el a" << (char)164 << "o: ";
        cin >> year;
        if (bisiesto(year))
        {
            cout << endl << "El a" << (char)164 << "o es biciesto ";
        }
        else
        {
            cout << endl << "El a" << (char)164 << "o no es biciesto ";
        }
        cout << endl << "Desea probar con otro a" << (char)164 << "o?   si=1    no=2 ";
        cin >> opc;
    } while (opc == 1);
}
bool bisiesto(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
