#include <stdio.h>
#include <stdlib.h>
void serie(int n);

int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	serie(n);
	system("pause");
	return 0;
}

void serie(int n)
{
	printf("Luis David Flores Martinez\n");
	int contador = 2;
	bool flag = true;
	do
	{
		printf("%d\t", contador);
		if (flag == true)
		{
			contador += 3;
			flag = false;
		}
		else
		{
			contador += 2;
			flag = true;
		}
		if (contador % 10 == 0)
		{
			printf("\n");
		}

	} while (contador <= n);
}