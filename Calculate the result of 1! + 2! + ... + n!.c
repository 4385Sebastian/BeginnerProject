#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int calculate_the_factorial_of_i(int i);

int main()
{
	printf("Enter a positive integer \"n\". And this program will give the result of \"1! + 2! + ... + n!.\"\n");
	int n = 0;
	do {
		printf("Enter a positive integer as \"n\": ");
		scanf("%d", &n);
	} while (n < 1);
	//Calculate the result of "1! + 2! + ... + n!".
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		//Calculate respectively from "1!" all the way to "n!".
		int factorial_of_i = calculate_the_factorial_of_i(i);
		result += factorial_of_i;
	}
	printf("The result of \"1!+ 2!+ ... + n!\" is %d.", result);
}

int calculate_the_factorial_of_i(int i)
{
	int factorial_of_i = 1;
	for (int j = 1; j <= i; j++)
	{
		factorial_of_i *= j;
	}
	return factorial_of_i;
}