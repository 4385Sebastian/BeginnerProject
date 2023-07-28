#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	int input = 0;
	printf("Please input a number:");
	scanf("%d", &input);
	int count = 0;
	for (count = 0; count < 5; count++)
	{
		if (input == numbers[count])
		{
			printf("%d=numbers[%d]", input, numbers[count]);
			break;
		}
		
	}
	if (count == 5)
	{
		printf("%d is not in numbers[4]", input);
	}
}

