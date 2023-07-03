#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int integer = 0, digit = 0;
	printf("Please input an postive integer with nine digits at most:");
	scanf("%d", &integer);
	do {
		integer /= 10;
		digit++;
	} while (digit > 0);
	printf("The integer has %d digits", digit);
}