#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int foot = 0;
	int inch = 0;
	printf("��ֱ�����Ӣ�ߺ�Ӣ������");
	scanf("%d %d", &foot, &inch);
	printf("%dӢ��%dӢ�����%f��\n", foot, inch, (foot + inch / 12.0) * 0.3048);

}