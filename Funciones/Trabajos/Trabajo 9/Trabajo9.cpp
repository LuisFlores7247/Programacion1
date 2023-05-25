#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void palindromo(char frase[50]);

int main(int argc, char **argv)
{
    printf("Luis David Flores Martinez\n");
    for (int i = 1; i <= argc; i++)
    {
        palindromo(argv[i]);
    }
    system("pause");
    return 0;
}

void palindromo(char frase[50])
{
    char fraseRev[50];
    int i = 0, j = 0;
    bool flag = true;
    strcpy(fraseRev, frase);
    strrev(fraseRev);
    do
    {
        if (frase[i] == ' ')
        {
            i++;
        }
        else if (fraseRev[j] == ' ')
        {
            j++;
        }
        else
        {
            if (frase[i] == fraseRev[j] || toupper(frase[i]) == fraseRev[j] || frase[i] == toupper(fraseRev[j]))
            {
                flag = true;
                i++;
                j++;
            }
            else
            {
                flag = false;
                break;
            }
        }

    } while (i < strlen(frase) && j < strlen(fraseRev));
    if (flag)
    {
        printf("%s ... es palindromo\n", frase);
    }
    else
    {
        printf("%s ... NO es palindromo\n", frase);
    }
}