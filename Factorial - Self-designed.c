#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int calculation(int n);


int main()
{
	int n = 0;
	do {
		printf("A postive integer:");
		scanf("%i", &n);
	} while (n < 1);
	int factorial = calculation(n);
	printf("The factorial of %i is %i.\n", n, factorial);
}

int calculation(int n)
{
	int factorial = 1;
	int m = n;
	for (int i = 0; i < n - 1; i++)
	{
		factorial *= m;
		m--;
		if (1 == m)
		{
			break;
		}
	}
	return factorial;
}