#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("��������������");
	int number1 = 0, number2 = 0, max=0;
	scanf("%d %d", &number1, &number2);
	if (number1 > number2) 
		max = number1;
	
	else  max = number2; 
	printf("�ϴ������%d", max);
}