#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int change = 0;
	do {
		printf("Change owed in cent(s):");
		scanf("%d", &change);
	} while(change < 1)
	int quarter = change / 25;
	int remainder = change % 25;
	int dime = remainder / 10;
	remainder = remainder % 10;
	int nickel = remainder / 5;
	remainder = remainder % 5;
	int cent = remainder;
	int coin = quarter + dime + nickel + cent;
	if (quarter != 0)
	{
		printf("%d quarter(s), ", quarter);
	}
	if (dime != 0)
	{
		printf("%d dime(s), ", dime);
	}
	if (nickel != 0)
	{
		printf("%d nickel(s), ", nickel);
	}
	if (cent != 0)
	{
		printf("%d cent(s), ", cent);
	}
	printf("%d coin(s) in total.", coin);
}