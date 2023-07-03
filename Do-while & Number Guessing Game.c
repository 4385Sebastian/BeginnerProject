#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 1;
	int answer = 0;
	printf("A random number between 0 and 100 is generated. Have a guess:");
	scanf("%d", &answer);
	while (answer != number)
	{
		if (answer > number) {
			printf("Your answer is bigger than the number.");
		}
		else {
			printf("Your answer is smaller than the number.");
		}
		printf("Have another guess:");
		scanf("%d", &answer);
		count++;
	}
	printf("Congratualtions! You use %d time(s) to get the correct answer.", count);
}