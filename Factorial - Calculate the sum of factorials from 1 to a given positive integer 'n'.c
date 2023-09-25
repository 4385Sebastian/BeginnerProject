#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int calculate_the_factorial_of_i(int i);

int main()
{
	printf("Enter a positive integer \"n\". And this program will give the result of \"1! + 2! + ... + n!.\"\n");
	int n = 0;
	do {
		printf("Enter a positive integer as \"n\": ");
		scanf("%d", &n);
	} while (n < 1);
	//Calculate the result of "1! + 2! + ... + n!".
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		//Calculate respectively from "1!" all the way to "n!".
		int factorial_of_i = calculate_the_factorial_of_i(i);
		result += factorial_of_i;
	}
	printf("The result of \"1!+ 2!+ ... + n!\" is %d.", result);
}

int calculate_the_factorial_of_i(int i)
{
	int factorial_of_i = 1;
	for (int j = 1; j <= i; j++)
	{
		factorial_of_i *= j;
	}
	return factorial_of_i;
}

/*
1. 这段代码的作用是计算给定正整数 n 的阶乘和。
2. 代码首先要求用户输入一个正整数 n，然后通过循环检查输入的值是否合法（大于等于 1）。
接下来，通过调用函数 calculate_the_factorial_of_i 计算从 1 到 n 的每个数的阶乘，并将结果累加到变量 result 中。最后，打印出计算得到的 "1! + 2! + ... + n!" 的结果。
3. 函数 calculate_the_factorial_of_i 是用来计算某个数 i 的阶乘的。它使用了一个内部循环，从 1 递增到 i，将每次循环的结果与当前的阶乘值相乘，最终返回计算好的阶乘值。
4. 总体而言，这段代码的目的是计算阶乘和，其中包括了一个用于计算阶乘的辅助函数。

1. The purpose of this code is to calculate the sum of factorials from 1 to a given positive integer 'n'.
2. The code starts by prompting the user to enter a positive integer 'n'. It then uses a do-while loop to validate the input, ensuring that 'n' is greater than or equal to 1.
3. Next, the code iterates from 1 to 'n' using a for loop. 
Within each iteration, it calls the function 'calculate_the_factorial_of_i' to calculate the factorial of the current number 'i'. The calculated factorial is then added to the variable 'result'.
4. Finally, the code prints the result of the sum of factorials as "1! + 2! + ... + n!".
5. The function 'calculate_the_factorial_of_i' is responsible for calculating the factorial of a given number 'i'. 
It uses an inner loop that starts from 1 and iterates until 'i', multiplying each iteration's value with the current factorial value. The final calculated factorial is returned.
6. In summary, this code calculates the sum of factorials from 1 to 'n', utilizing a helper function to calculate individual factorials.

这段代码是一个简单而有效的计算阶乘和的程序。以下是对该代码的评价：
优点：
代码结构清晰：该代码采用了合理的模块化设计，将计算阶乘和的逻辑封装在一个函数中，并在主函数中进行调用，使得代码易于理解和维护。
输入验证：使用了循环和条件判断来确保用户输入的正整数n的合法性，能够防止无效或负数的输入。
函数复用：通过定义一个独立的计算阶乘的函数，可以在不同地方重复调用，提高了代码的可复用性。
改进空间：
变量命名：虽然代码中的变量命名较为一致和明确，但仍有改进的余地。更加具有描述性的变量名可以增加代码的可读性。
错误处理：代码缺乏对输入错误的处理机制，如非数字输入、溢出等情况。考虑添加适当的错误处理机制，以增强程序的健壮性。
性能优化：尽管代码在计算阶乘和时工作正常，但对于较大的输入值 'n'，计算阶乘可能会导致性能问题。可以考虑使用递归或其他更高效的算法来计算阶乘。
总体而言，这段代码是一个简单而有效的计算阶乘和的程序，但仍有一些改进的空间。根据实际需求和具体情况，可以对代码进行优化和扩展。

The evaluation of the code:
Pros:
Clear code structure: The code follows a well-structured design by encapsulating the logic of calculating the factorial sum within a function and calling it in the main function. This makes the code easy to understand and maintain.
Input validation: The code utilizes loops and conditional checks to ensure the validity of the user input, specifically the positive integer 'n'. This prevents invalid or negative inputs from being processed.
Function reusability: By defining a separate function for calculating factorials, it allows for reuse in different parts of the code, increasing code reusability.
Areas for improvement:
Variable naming: Although the variable names in the code are relatively consistent and clear, there is room for improvement. Using more descriptive variable names can enhance code readability.
Error handling: The code lacks error handling mechanisms for cases such as non-numeric input or potential overflow. Consider adding appropriate error handling to strengthen the robustness of the program.
Performance optimization: While the code works fine for calculating factorial sums, computing factorials for larger input values of 'n' may cause performance issues. Consider exploring recursive or other more efficient algorithms for factorial computation.
Overall, the code is a simple and effective program for calculating factorial sums, but there is still room for improvement. Depending on specific requirements and circumstances, the code can be optimized and expanded upon.
*/