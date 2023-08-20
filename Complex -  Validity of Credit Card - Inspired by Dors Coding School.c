#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

long long check_greater_than_zero(long long credit_card_number);
int calculate_digits(long long credit_card_number);
int validate_digits(int number_of_digits);
int calculate_the_sum_of_every_other_digit(long long credit_card_number);
int validate_checksum(int checksum);
int validate_starting_numbers(long long credit_card_number, int digits);

int main()
{
	printf("This is a program to validate of a credit card number of American Express, MasterCard or Visa.\n");
	//1. Get a credit card number that is at least greater than zero.
	long long credit_card_number = 0;
	printf("Input a credit card number that is greater than zero: ");
	scanf("%lld", &credit_card_number);
	credit_card_number = check_greater_than_zero(credit_card_number);
	//2. Check if the digit(s) of the credit card number valid, i.e., if it is 13, 15 or 16.
	//2.1 Calculate the digit(s).
	int digits = calculate_digits(credit_card_number);
	printf("The digit(s) of the credit card number: %d.\n", digits);
	//2.2 Check if it is valid.
	int validation_digits = validate_digits(digits);
	//2.3 If invalid, the program ends.
	if (0 == validation_digits)
	{
		printf("The digit should be 15 for American Express, 16 for MasterCard, or 13 or 16 for Visa.\n");
	}
	//2.4 If valid, the program continues.
	else 
	{
		//3. Check if checksum of the credit card number is valid with Luhn's Algorithm.
		int sum_of_every_other_digit = calculate_the_sum_of_every_other_digit(credit_card_number);
		printf("The sum of every other digit of the credit card number: %d\n", sum_of_every_other_digit);
		int validity_of_checksum = validate_checksum(sum_of_every_other_digit);
		if (0 == validity_of_checksum)
		{
			printf("The checksum is invalid for the last digit of %d is not 0.\n", sum_of_every_other_digit);
		}
		else 
		{
			printf("The checksum is valid for the last digit of %d is 0.\n", sum_of_every_other_digit);
			//4. Validate the starting number(s) of the credit card number.
			int validity_of_starting_numbers = validate_starting_numbers(credit_card_number, digits);
			if (0 == validity_of_starting_numbers)
			{
				printf("The starting number(s) of the credit card number is invalid for American Express(15), MasterCard(16) or Visa(13/16).\n");
			}
		}
	}
}

long long check_greater_than_zero(long long credit_card_number)
{
	while (credit_card_number <= 0)
	{
		printf("The number should be at least greater than zero. Please input again: ");
		scanf("%lld", &credit_card_number);
	}
	return credit_card_number;
}

int calculate_digits(long long credit_card_number)
{
	int digits = 0;
	while (credit_card_number > 0)
	{
		credit_card_number /= 10;
		digits++;
	}
	return digits;
}

int validate_digits(int number_of_digits)
{
	int outcome_digits = 0;
	if (13 == number_of_digits || 15 == number_of_digits || 16 == number_of_digits )
	{
		outcome_digits = 1;
	}
	return outcome_digits;
}

int calculate_the_sum_of_every_other_digit(long long credit_card_number)
{
	//Initialize all the variables that are going to be used.
	int every_other_digit_starting_from_the_last = 0;
	int every_other_digit_starting_from_the_second_to_last = 0;
	int sum_of_every_other_digit = 0;
	while (credit_card_number > 0) 
	//Loop every time the credit card number is divided by ten and greater than 0 after. In each loop, there are two paths to choose, i.e., add the last digit to the right sum.
	{
		static int path = 0;
		if (0 == path)
		{
			every_other_digit_starting_from_the_last = credit_card_number % 10;
			sum_of_every_other_digit += every_other_digit_starting_from_the_last;
			path = 1;
		}
		else
		{
			every_other_digit_starting_from_the_second_to_last = 2 * (credit_card_number % 10);
			int lastdigit = 0;
			if (every_other_digit_starting_from_the_second_to_last >= 10)
			{
				lastdigit = every_other_digit_starting_from_the_second_to_last % 10;
				sum_of_every_other_digit += (1 + lastdigit);
			}
			else
			{
				sum_of_every_other_digit += every_other_digit_starting_from_the_second_to_last;
			}
			path = 0;
		}
		credit_card_number /= 10;
	}
	return sum_of_every_other_digit;
}

int validate_checksum(int sum_of_every_other_digit)
{
	int validity_checksum = 0;
	int lastdigit = sum_of_every_other_digit % 10;
	if (0 == lastdigit)
	{
		validity_checksum = 1;
	}
	return validity_checksum;
}

int validate_starting_numbers(long long credit_card_number, int digits)
{
	int validation_starting_numbers = 0;
	if (digits == 15 && (credit_card_number / 10000000000000 == 34 || credit_card_number / 10000000000000 == 37))
	{
		printf("Credit card brand: American Express.\n");
		validation_starting_numbers = 1;
	}
	if (digits == 16 && 50 < credit_card_number / 100000000000000 && 56 > credit_card_number / 100000000000000)
	{
		printf("Credit card brand: Mastercard.\n");
		validation_starting_numbers = 1;
	}
	if (digits == 13 && credit_card_number / 1000000000000 == 4)
	{
		printf("Credit card brand: Visa.\n");
		validation_starting_numbers = 1;
	}
	if (digits == 16 && credit_card_number / 1000000000000000 == 4)
	{
		printf("Credit card brand: Visa.\n");
		validation_starting_numbers = 1;
	}
}