#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	double a = 0, b = 0, c = 0;
	printf("请输入两个数：");
	scanf("%lf %lf", &a, &b);
	c = (a + b) / 2;
	printf("两个数的平均数为：%f", c);
}