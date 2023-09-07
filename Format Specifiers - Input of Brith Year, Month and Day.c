#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int birthdate = 0, birthyear = 0, birthmonth = 0, birth_day = 0;
	printf("Birthdate(example:19990101):");
	scanf("%4d%2d%2d", &birthyear, &birthmonth, &birth_day);
	printf("Birthyear: %d\nBirthmonth: %02d\nBirth day: %02d", birthyear, birthmonth, birth_day);

}