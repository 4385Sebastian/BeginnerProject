#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	printf("This is a program that calculate the sum of factorials from 1 to a given positive integer.\n");
	printf("Enter a positive integer: ");
	int n = 0;
	scanf("%d", &n);
	int factorial = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		sum += factorial;
	}
	printf("The sum: %d.", sum);
}