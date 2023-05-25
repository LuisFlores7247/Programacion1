#include <iostream>

using namespace std;

enum year
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    for (int i = JAN; i <= DEC; i++)
    {
        cout << i << " ";
    }

    return 0;
}
