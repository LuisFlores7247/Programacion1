#include <iostream>

using namespace std;

int menu1();
void menu2();
void menu3();

int main(int argc, char const *argv[])
{
    int op1, op2, op3;
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
            cout << endl
                 << "Adios";
            break;
        }
    } while (op1 != 3);

    return 0;
}

int menu1()
{
    int op;
    cout << endl
         << "\nMenu 1";
    cout << endl
         << "1 Te lleva al menu2";
    cout << endl
         << "2 Te lleva al menu3";
    cout << endl
         << "3 Salir";
    cout << endl
         << "Cual opcion quieres: ";
    do
    {
        cin >> op;
    } while (op < 1 || op > 3);
}

void menu2()
{
    int op;
    cout << endl
         << "\nMenu 2";
    cout << endl
         << "1 Opcion 1";
    cout << endl
         << "2 Opcion 2";
    cout << endl
         << "3 Regreso al menu 1";
    cout << endl
         << "Cual opcion quieres: ";
    do
    {
        cin >> op;
    } while (op < 1 || op > 3);
    switch (op)
    {
    case 1:
        cout << "Opcion 1";
        break;
    case 2:
        cout << "Opcion 2";
        break;
    case 3:
        menu1();
        break;
    }
}

void menu3()
{
    int op;
    cout << endl
         << "\nMenu 3";
    cout << endl
         << "1 Opcion 1";
    cout << endl
         << "2 Opcion 2";
    cout << endl
         << "3 Regreso al menu 1";
    cout << endl
         << "Cual opcion quieres: ";
    do
    {
        cin >> op;
    } while (op < 1 || op > 3);
    switch (op)
    {
    case 1:
        cout << "Opcion 1";
        break;
    case 2:
        cout << "Opcion 2";
        break;
    case 3:
        menu1();
        break;
    }
}
