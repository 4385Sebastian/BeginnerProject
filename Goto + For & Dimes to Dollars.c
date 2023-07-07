#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int dollar, dime, twodimes, fivedimes = 0;
	printf("Please input the amount of dollar:");
	scanf("%d", &dollar);
	for (dime = 1; dime < 10 * dollar; dime++)
	{
		for (twodimes = 1; twodimes < 5 * dollar; twodimes++)
		{
			for (fivedimes = 1; fivedimes < 2 * dollar; fivedimes++)
				if (dime + 2 * twodimes + 5 * fivedimes == 10 * dollar)
				{
					printf("%d * dime(s) + %d * twodimes + %d * fivedimes == %d * dollar(s)",dime, twodimes, fivedimes, dollar);
					goto out;
				}
		}

	}
	out:
	return 0;
}