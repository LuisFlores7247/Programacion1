#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Luis David Flores Martinez";
    int *ap1;
    ap1 =NULL;
    int *ap2 = NULL;

    int n=8;
    int *ap3;
    ap3=&n;
    int *ap4=&n;

    int *ap5;
    ap5 = new int;
    *ap5=9;
    cout<<endl<<*ap5;
    char *ap6 = new char;
    *ap6='@';
    cout<<endl<<*ap6;

    delete ap5;

    delete ap6;

    cout<<endl;
    system("Pause");
    return EXIT_SUCCESS;


    return 0;
}
