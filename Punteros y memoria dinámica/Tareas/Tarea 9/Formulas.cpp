#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void formulas();

int main()
{
    cout << endl << "Luis David Flores Martinez";
    formulas();
    system("pause");
    return 0;
}
void formulas()
{
    const float PI = 3.1416;
    float radio;

    cout << endl << "Introduce el radio a trabajar: ";
    cin >> radio;
    cout << fixed << setprecision(2);
    cout << endl << "Longitud de la circunferencia: " << 2 * PI * radio;
    cout << endl << "longitud del circulo: " << PI * pow(radio, 2);
    cout << endl << "Volumen de la esfera: " << (4.2 / 3) * PI * pow(radio, 3) << endl;
}
