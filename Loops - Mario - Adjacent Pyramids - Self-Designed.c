#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int height = 0;
	do
	{
		printf("Input a postive integer between 1 and 8, inclusive, for the height of the pyramids:");
		scanf("%d", &height);
	} while (height<1||height>8);
	for (int row = 1; row <= height; row++)
	{
		for (int a = 0; a < height - row; a++)
		{
			printf(" ");
		}
		for (int b = 0; b < row; b++)
		{
			printf("#");
		}
		printf(" ");
		for (int c = 0; c < row; c++)
		{
			printf("#");
		}
		printf("\n");
	}
}