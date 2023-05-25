#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr;
    int num = 7;
    int *ptr2;
    cout<<"Luis David Flores Martinez";

    cout<<endl<<&num;
    ptr=&num;
    cout<<endl<<ptr;
    cout<<endl<<&ptr;
    cout<<endl<<*ptr;

    *ptr = 15;

    cout<<endl<<num;

    ptr2 = ptr;
    *ptr2 =30;
    cout<<endl<<num<<endl<<*ptr<<endl<<*ptr2;
    cout<<endl<<&ptr2;
    cout<<endl<<ptr<<endl<<ptr2<<endl;

    int *ptr3=NULL;

    system("Pause");
    return 0;
}
