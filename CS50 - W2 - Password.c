#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool check(char password[]);

int main()
{
	printf("This is a program that checks if a password has at least one uppercase letter, one lowercase letter, one number and one symbol.\n");
	char password[20];
	printf("Enter your password(less than 20 characters in total): ");
	scanf("%s", password);
	if (check(password))
	{
		printf("The passport is valid.");
	}
	else
	{
		printf("The password should have at least one uppercase letter, one lowercase letter, one number and one symbol.\n");
	}
}

bool check(char password[])
{
	int length = strlen(password);
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (isupper(password[i]))
		{
			count++;
		}
		if (islower(password[i]))
		{
			count++;
		}
		if (isdigit(password[i]))
		{
			count++;
		}
		if (!(isalnum(password[i])))
		{
			count++;
		}
	}
	if (4 == count)
	{
		return true;
	}
	else
	{
		return false;
	}
}