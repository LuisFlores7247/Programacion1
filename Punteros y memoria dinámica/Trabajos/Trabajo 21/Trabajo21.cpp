#include <iostream>

using namespace std;

void intento1(int a, int b);
void intento2(int *a, int *b);

int main(int argc, char const *argv[])
{
    cout<<"Luis David Flores Martinez";
    int a = 9;
    int b = 18;

    intento1(a,b);
    cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;

    intento2(&a,&b);
    cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}

void intento1(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
void intento2(int *a, int *b)
{
    int aux;
    aux = *a;
    *a=*b;
    *b=aux;
}