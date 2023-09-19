#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	do
	{
		printf("Positive integer: ");
		scanf("%d", &n);
	} while (n < 1);
	int factorial = 1;
	for (int i =1; i<=n; i++)
	{
		factorial *= i;
	}
	printf("The factorial of %d is %d", n, factorial);
}