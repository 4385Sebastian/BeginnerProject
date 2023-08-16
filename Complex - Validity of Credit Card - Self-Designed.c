#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int sign = 0; //0 means invalid, 1 means valid.
	long long number = 0;
	do {
		printf("Credit card number:");
		scanf("%lld", &number);
	} while (number < 1); //Prompting the user for a credit card number that is greater than zero.
	int digit_num = 0;
	long long remainder = 1;
	long long number2 = number; //A copy of the number.
	while (remainder>0)
	{
		number2 /= 10;
		remainder = number2;
		digit_num++;
	}
	printf("Number of digit(s):%d\n", digit_num); //Getting the number of digit(s) of the credit card number.
	if (digit_num == 13 || digit_num == 15 || digit_num == 16) //Determine the validity of the number by its number of digit(s). 
	{
		int a = 0, asum = 0;
		long long number3 = number;
		while (number3 > 0)
		{
			a = number3 % 10;
			asum += a;
			number3 /= 100;
		} //Getting the sum of the last digit and every other digits.
		printf("asum=%d\n", asum);
		int b = 0, bsum = 0;
		long long number4 = number / 10;
		while (number4 > 0)
		{
			b = 2 * (number4 % 10);
			int c = 0, d = 0;
			if (b > 9)
			{
				c = b % 10;
				d = b / 10;
				bsum = bsum + c + d;
			}
			else {
				bsum += b;
			}
			number4 /= 100;
		} //Getting the sum of the second-to-last digit and every other digits.
		printf("bsum=%d\n", bsum);
		int csum = asum + bsum;
		if (csum % 10 == 0)
		{ //Determining the type of the card.
			if (digit_num == 15 && (number/10000000000000==34|| number / 10000000000000 == 37))
			{
				printf("American Express.\n");
				sign = 1;
			}
			if (digit_num == 16 && 50 < number / 100000000000000 && 56 > number / 100000000000000)
			{
				printf("Mastercard.\n");
				sign = 1;
			}
			if (digit_num == 13 && number/1000000000000==4)
			{
				printf("Visa.\n");
				sign = 1;
			}
			if (digit_num == 16 && number / 1000000000000000 == 4)
			{
				printf("Visa.\n");
				sign = 1;
			}
		}
	}
	if (sign == 0) //Final determination of the validity of the card.
	{
		printf("The number is invalid.");
	}
	else {
		printf("The number is valid.");
	}
}