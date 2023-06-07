#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int count = 10;
	int count1 = count++;
	printf("count=%d, count++=%d\n", count, count1);
	int COUNT = 10;
	int COUNT1 = ++COUNT;
	printf("COUNT=%d, COUNT++=%d", COUNT, COUNT1);
}