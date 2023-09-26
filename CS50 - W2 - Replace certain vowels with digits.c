#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	printf("This is a program that will replace certain vowels with digits.\n");
	char word[100];
	printf("Enter a word (under 100 characters): ");
	scanf("%s", word);
	printf("The word before: %s.\n", word);
	int word_length = strlen(word);

	for (int i = 0; i < word_length; i++)
	{
		switch (word[i])
		{
		case 97:
			word[i] = '6';
			break;
		case 101:
			word[i] = '3';
			break;
		case 105:
			word[i] = '1';
			break;
		case 111:
			word[i] = '0';
			break;
		}
	}
	printf("The word after:  %s.\n", word);
}
