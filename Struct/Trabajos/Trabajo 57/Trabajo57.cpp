#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

enum statusJuego
{
    CONTINUA,
    GANA,
    PIERDE
};

int lanzarDado();

int main()
{
    cout << "Luis David Flores Martinez" << endl;
    srand(time(0));
    int suma, dado1, dado2;
    int mipunto;
    char resp = 's';
    statusJuego estado;
    while (resp == 's')
    {
        dado1 = lanzarDado();
        dado2 = lanzarDado();
        suma = dado1 + dado2;
        cout << "Tirando dados: " << dado1 << "+" << dado2 << "=" << suma;
        cout << endl;
        switch (suma)
        {
        case 7:
        case 11:
            estado = GANA;
            cout << "\nGanaste\n";
            break;
        case 2:
        case 3:
        case 12:
            estado = PIERDE;
            cout << "\nPerdiste\n";
            break;
        default:
            estado = CONTINUA;
            mipunto = suma;
            cout << "Tu punto para ganar es " << mipunto << " continuas jugando" << endl;
            break;
        }

        while (estado == CONTINUA)
        {
            dado1 = lanzarDado();
            dado2 = lanzarDado();
            suma = dado1 + dado2;
            cout << "Tirando dados: " << dado1 << "+" << dado2 << "=" << suma;
            cout << endl;

            if (suma == mipunto)
            {
                estado = GANA;
            }
            else
            {
                if (suma == 7)
                {
                    estado = PIERDE;
                }
            }
            if (estado == GANA)
            {
                cout << "Jugador gana" << endl;
            }
            else
            {

                if (estado == PIERDE)
                {
                    cout << "Jugador Pierde" << endl;
                }
            }
        }
        cout << "Deseas jugar otra vez s/n? ";
        fflush(stdin);

        cin >> resp;
    }
    return 0;
}

int lanzarDado()
{
    return 1 + rand() % 6;
}