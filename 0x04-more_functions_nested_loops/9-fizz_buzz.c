#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program is an implementation of the classic "FizzBuzz"
 * programming challenge. The program prints the numbers from 1 to 100, but for
 * multiples of three, it prints "Fizz" instead of the number
 * , and for multiples
 * of five, it prints "Buzz". If a number is a multiple of both three and five,
 * it prints "FizzBuzz". The program uses a for loop to iterate through the
 * numbers and if-else statements to determine whether each number meets the
 * criteria for printing "Fizz", "Buzz", or "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
		printf("%d ", i);
	}
}
	printf("\n");

	return (0);
}

