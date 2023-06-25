#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int payment = 0, price = 0, change=0, difference=0;
	printf("请输入应付金额：");
	scanf("%d", &price);
	printf("请输入实付金额：");
	scanf("%d", &payment);
	change = payment - price;
	if (payment < price) {
		difference = price - payment;
		printf("还需要%d元", difference);
	}
	else printf("找您%d元", change);

}