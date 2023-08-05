#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int valid_triangle(float a, float b, float c);

int main()
{

	printf("This is a function to determine if three numbers can represent the of lengths of the three sides of a triangle.\n");
	float input[3];
	for (int i = 0; i < 3; i++)
	{
		do 
		{
			printf("Please input one of three postive numbers:");
			scanf("%f", &input[i]);
		} while (input[i] <= 0);
		
	}
	int check = valid_triangle(input[0], input[1], input[2]);
	if (1 == check)
	{
		printf("%f, %f and %f can represent the lengths of the three sides of a triangle.", input[0], input[1], input[2]);
	}
	else
	{
		printf("%f, %f and %f cannot represent the lengths of the three sides of a triangle.", input[0], input[1], input[2]);
	}
}

int valid_triangle(float a, float b, float c)
{
	int output = 0;
	if (a + b > c && a + c > b && b + c > a)
	{
		output = 1;
	}
	return output;
}