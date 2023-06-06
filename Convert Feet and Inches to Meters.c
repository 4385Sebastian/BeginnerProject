#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int foot = 0;
	int inch = 0;
	printf("请分别输入英尺和英寸数：");
	scanf("%d %d", &foot, &inch);
	printf("%d英尺%d英寸等于%f米\n", foot, inch, (foot + inch / 12.0) * 0.3048);

}