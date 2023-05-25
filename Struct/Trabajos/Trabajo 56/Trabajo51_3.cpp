#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Luis David Flores Martinez" << endl;
    enum Gender
    {
        MALE = 2,
        FEMALE = 4
    };
    Gender gender;
    int sexo;
    cout << "Male (2) Female (4): ";
    cin >> sexo;

    switch (sexo)
    {
    case MALE:
        gender = MALE;
        cout << "Gender is Male, codigo de identificacion: " << gender;
        break;
    case FEMALE:
        gender = FEMALE;
        cout << "Gender is Female, codigo de identificacion: " << gender;
        break;
    default:
        cout << "Value can be Male or Female";
        break;
    }
    return 0;
}
