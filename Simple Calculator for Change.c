#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int payment = 0, price = 0, change=0, difference=0;
	printf("������Ӧ����");
	scanf("%d", &price);
	printf("������ʵ����");
	scanf("%d", &payment);
	change = payment - price;
	if (payment < price) {
		difference = price - payment;
		printf("����Ҫ%dԪ", difference);
	}
	else printf("����%dԪ", change);

}