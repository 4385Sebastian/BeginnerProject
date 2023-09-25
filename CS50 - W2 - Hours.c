#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int weeks = 0;
	do {
		printf("Number of weeks taking CS50 (no more than 100): ");
		scanf("%d", &weeks);
	} while (weeks < 1);
	int hours[100];
	//Get the hours spent every week.
	for (int i = 0; i < weeks; i++)
	{
		printf("Week %d hours: ", i+1);
		scanf("%d", &hours[i]);
	}
	//Calculate the total hours.
	int total_hours = 0;
	for (int i = 0; i < weeks; i++)
	{
		total_hours += hours[i];
	}
	//Calculate the average hours.
	int average_hours = total_hours / weeks;
	//Make sure the input is valid.
	int answer = 0;
	int ch = 0;
	do
	{
		printf("Enter T for total hours, A for average hours per week (capital T or A): ");
		while ((ch = getchar()) != '\n')
		{
			;
		}
		answer = getchar();
	} while (answer != 65 && answer != 84);
	//Print out the total hours or average hours per week depending on the input.
	if (65 == answer)
	{
		printf("Average hours per week: %d\n", average_hours);
	}
	else if (84 == answer)
	{
		printf("Total hours: %d\n", total_hours);
	}
}