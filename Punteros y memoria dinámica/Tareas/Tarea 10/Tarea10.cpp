#include <iostream>
using namespace std;
int main()
{
    cout<<"Luis David Flores Martinez";
    int z;
    int k = 7;
    int *ptr = &k;
    int *ptr2 = new int;
    *ptr2 = 3;
    (*ptr)++;
    cout<<endl<<(*ptr)++;
    cout<<endl<<--(*ptr2);
    *ptr2 += 2;
    cout<<endl<<*ptr;
    z = (*ptr)-- + 2 * (*ptr2);
    cout<<endl<<z;
    cout<<endl<<*ptr;
    cout<<endl<<*ptr2;
    return 0;
}