#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int number = 0, divisor=0;
	printf("Please input an postive integer:");
	scanf("%d",&number);
	for (divisor = 2; divisor < number; divisor++)
	{
		if (number% divisor == 0)
		{
			break;
		}
	}
	if (divisor == number)
	{
		printf("%d is prime number.", number);
	}
	else 
	{
		printf("%d is not prime number.", number);

	}
}