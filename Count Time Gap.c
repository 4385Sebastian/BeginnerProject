#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int hour1, minute1, hour2, minute2;
	printf("请输入第一个时间：（*小时*分钟）");
	scanf("%d小时%d分钟", &hour1, &minute1);
	printf("请输入第二个时间：（*小时*分钟）");
	scanf("%d小时%d分钟", &hour2, &minute2);
	printf("两个时间的差为%d小时%d分钟", (hour1 * 60 + minute1 - (hour2 * 60 + minute2)) / 60, (hour1 * 60 + minute1 - (hour2 * 60 + minute2))%60);
}
