#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	for (int i = 1; i < 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
}