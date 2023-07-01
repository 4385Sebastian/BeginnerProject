#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int year = 0;
	printf("«Î ‰»ÎƒÍ∑›£∫");
	scanf("%d", &year);
	switch (year) {
	case 2022: printf("Last year"); break;
	case 2023: printf("This year"); break;
	case 2024: printf("Next year"); break;
	default: printf("*");
	}
}