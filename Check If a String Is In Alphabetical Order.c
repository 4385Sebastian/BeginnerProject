#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	printf("String(in 100 characters): ");
	scanf("%s", string);
	printf("The string is %s.\n", string);
	int length = strlen(string);
	int indicator = 1;
	for (int i = 0; i < length - 1; i++)
	{
		if (string[i] < 97)
		{
			string[i] += 32;
		}
		if (string[i + 1] < 97)
		{
			string[i + 1] += 32;
		}
		int letter1 = string[i];
		int letter2 = string[i + 1];
		if (letter1 > letter2)
		{
			indicator = 0;
				break;
		}
	}
	if (1 == indicator)
	{
		printf("The string is in alphabetical order.\n");
	}
	else
	{
		printf("The string is not in alphabetical order.\n");
	}
}
