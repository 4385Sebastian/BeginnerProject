#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0, denominator=1;
	double f = 0.0;
	printf("n=");
	scanf("%d", &n);
	for (; denominator <= n;)
	{
		f += 1.0 / denominator;
		denominator++;
	}
	printf("f(n)=%f", f);
	return 0;
}