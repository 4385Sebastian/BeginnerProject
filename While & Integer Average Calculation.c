#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int integer = 0, sum = 0, count = 0;
	double average = 0;
	printf("Please input integers(enter 0 to stop input and get the average):");
	scanf("%d", &integer);
	while (integer != 0) {
		sum += integer;
		count++;
		scanf("%d", &integer);
	}
	average = 1.0*sum/count;
	printf("The average for those integers is %f.\n", average);
}