#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int hour1, minute1, hour2, minute2;
	printf("�������һ��ʱ�䣺��*Сʱ*���ӣ�");
	scanf("%dСʱ%d����", &hour1, &minute1);
	printf("������ڶ���ʱ�䣺��*Сʱ*���ӣ�");
	scanf("%dСʱ%d����", &hour2, &minute2);
	printf("����ʱ��Ĳ�Ϊ%dСʱ%d����", (hour1 * 60 + minute1 - (hour2 * 60 + minute2)) / 60, (hour1 * 60 + minute1 - (hour2 * 60 + minute2))%60);
}
