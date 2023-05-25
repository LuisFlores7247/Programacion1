#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int menu1();
void menu2();
void menu3();

int main()
{
    int op1, op2, op3;
    cout << "Luis David Flores Martinez" << endl;
    do
    {
        op1 = menu1();
        switch (op1)
        {
        case 1:
            menu2();
            break;
        case 2:
            menu3();
            break;
        case 3:
            cout << "Adios :D";
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (op1 != 3);
    return 0;
}
int menu1()
{
    int op;
    cout << "Menu 1" << endl;
    cout << "1.- Te lleva al menu 2" << endl;
    cout << "2.- Te lleva al menu 3" << endl;
    cout << "3.- Salir" << endl;
    cout << "Cual opcion quieres: " << endl;
    do
    {
        cin >> op;
    } while (op < 1 || op > 3);
    return op;
}
void menu2()
{
    int op;
    do
    {
        cout << "Menu 2" << endl;
        cout << "1.- Imprimir Hola mundo" << endl;
        cout << "2.- Saludar" << endl;
        cout << "3.- Regreso al menu 1" << endl;
        cout << "Cual opcion quieres: " << endl;
        do
        {
            cin >> op;
        } while (op < 1 || op > 3);
        switch (op)
        {
        case 1:
            cout << "Hola mundo" << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        case 3:
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << endl;
    } while (op != 3);
}

void menu3()
{
    int op;
    do
    {
        cout << "Menu 3" << endl;
        cout << "1.- Imprimir numero aleatorio" << endl;
        cout << "2.- Despedirse" << endl;
        cout << "3.- Regreso al menu 1" << endl;
        cout << "Cual opcion quieres: " << endl;
        do
        {
            cin >> op;
        } while (op < 1 || op > 3);
        switch (op)
        {
        case 1:
            cout << 1 + rand() % (100 - 1 + 1) << endl;
            break;
        case 2:
            cout << "Adios" << endl;
            break;
        case 3:
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << endl;
    } while (op != 3);
}