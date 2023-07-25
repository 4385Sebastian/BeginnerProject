#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int array[100];
	int input = 0;
	printf("Please input postive integer numbers:");
	scanf("%d", &input);
	int count1 = 0;
	double sum = 0;
	double average = 0;
	while (input != -1)
	{
		array[count1] = input;
		count1++;
		sum += input;
		scanf("%d", &input);
	}
	average = sum / count1;
	printf("The average is %f.", average);
	printf("These are the numbers larger than the average: ");
	int count2 = 0;
	for (count2=0; count2 < count1; count2++)
	{
		if (array[count2] > average)
		{
			printf("%d ", array[count2]);
		}
	}

}