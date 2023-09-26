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

/*
作用：
这段代码是一个用于将单词中的特定元音字母替换成数字的程序。首先，程序会输出一段说明性的话语，然后要求用户输入一个不超过100个字符的单词。接下来，程序会打印出用户输入的单词，并计算单词的长度。

然后，程序使用一个循环遍历单词的每个字符。在循环内部，使用switch语句根据当前字符的ASCII码值进行判断，并进行相应的替换操作。具体来说，97对应的是字母'a'，将其替换为数字'6'；101对应的是字母'e'，将其替换为数字'3'；105对应的是字母'i'，将其替换为数字'1'；111对应的是字母'o'，将其替换为数字'0'。

最后，程序会打印替换后的单词。

This code is a program that replaces certain vowel letters in a word with specific digits. Here's how it works:

The program starts by printing a message explaining its purpose.

It then prompts the user to enter a word with a maximum length of 100 characters.

The program reads the input word using scanf and stores it in the word variable.

Next, the program displays the original word to the user.

The code determines the length of the word using strlen function and assigns it to the variable word_length.

The program enters a loop that iterates through each character of the word.

Inside the loop, a switch statement is used to check the value of the current character.

If the character matches one of the specified vowel letters ('a', 'e', 'i', or 'o'), it is replaced with a corresponding digit ('6', '3', '1', or '0').

After replacing the vowel letter (if applicable), the loop moves on to the next character until all characters have been checked and modified.

Finally, the program displays the modified word to the user, showing the result of the vowel-to-digit replacements.

In summary, this code takes a word as input from the user and replaces specific vowels with digits according to the defined rules.

评价：
这段代码是一个简单的字符替换程序，功能实现较为简单明了。然而，它也存在一些潜在的问题和改进的空间：

输入的单词长度没有进行有效的检查，可能导致溢出。可以通过使用scanf("%99s", word)来限制输入的单词长度最大为99个字符，避免数组溢出。

只对小写字母的元音进行了替换，对于大写字母和其他特殊字符没有进行处理。可以通过将switch语句中的case改为字符常量来支持更多的字符类型。

不显示替换了几个元音字母。可以在循环内部增加一个计数器，统计替换的元音字母数量，并在程序结束时打印出来。

没有给出示例或者说明哪些元音字母会被替换成什么数字。可以通过添加注释或者提供更详细的提示信息来增加代码的可读性。

总体而言，这段代码是一个基础的字符替换程序，可以根据需求进行一些改进和扩展。

Overall, the provided code is functional and achieves its intended purpose of replacing specific vowel letters with digits in a word. However, there are some aspects that could be improved:

Input validation: The code lacks proper validation for the length of the input word. This can potentially lead to buffer overflow issues if the user enters a word longer than the allocated array size. Adding input validation to ensure the word does not exceed the defined limit would enhance the code's robustness.

Limited character set: The code only handles lowercase vowels ('a', 'e', 'i', and 'o'). It does not handle uppercase vowels or other special characters. Expanding the code to support a broader range of characters or considering case-insensitive replacements would make it more versatile.

Lack of feedback: The code does not provide any feedback to inform the user about the number of vowel replacements performed. Including a counter variable to track and display the count of replaced vowels would improve the user experience and make the program more informative.

Commenting and documentation: The code would benefit from additional comments and explanations to make it easier for others to understand its purpose, functionality, and any specific rules for vowel-to-digit replacements.

In conclusion, while the code accomplishes its basic task, addressing these areas of improvement would enhance its reliability, flexibility, and readability.
*/