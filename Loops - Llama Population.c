#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int start = 0, end = 0;
	printf("Input a starting number of llamas: ");
	scanf("%d", &start);
	do {
		printf("Input an ending number of llamas: ");
		scanf("%d", &end);
	} while (end < start);
	//How many years will it take to get to the goal?
	//Every year, 1/3 of current llamas are born; 1/4 pass away.
	int year = 0;
	while (start < end)
	{
		start = start * 13/12;
		year++;
	}
	printf("It take %d year(s) to get to %d llamas.", year, end);
}