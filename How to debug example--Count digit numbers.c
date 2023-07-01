#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int integer = 0, digit = 0;
	printf("Please input a postive integer with nine digits at most:");
	scanf("%d", &integer);
	while (integer > 0) {
		integer /= 10;
		digit++;
		printf("Loop%d\n", digit);
		printf("Integer=%d, Digit=%d\n", integer, digit);
	}
	printf("The integer has %d digits.", digit);
}