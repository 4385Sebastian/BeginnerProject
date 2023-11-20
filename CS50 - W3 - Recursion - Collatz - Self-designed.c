#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int collatz(int n);

int main()
{
	int n = 0;
	printf("The Collatz conjecture applies to positive integers and speculates that it is always possible to get back to 1 if you follow some steps.\n");
	do
	{
		printf("Input a positive integer: ");
		scanf("%d", &n);
	} while (n < 1);
	int times = collatz(n);
	printf("It took %d times to get back to 1.", times);
}

int collatz(int n)
{
	static int times = -1;
	if (1 == n)
	{
		times++;
	}
	else if (n % 2 == 0)
	{
		times++;
		collatz(n / 2);
	}
	else
	{
		times++;
		collatz(3 * n + 1);
	}
	return times;
}
