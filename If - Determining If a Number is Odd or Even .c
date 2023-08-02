#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int input = 0;
	printf("Please input an integer : ");
	scanf("%d", &input);
	if (input % 2 == 1)
	{
		printf("%d is an odd number.", input);
	}
	else
	{
		printf("%d is an even number.", input);
	}
}

