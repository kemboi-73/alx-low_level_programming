#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0) /* if n is less than or equal to 0 */
	{
	_putchar('\n'); /* print a newline */
	}
	else /* if n is greater than 0 */
	{
	int i, j;

	for (i = 0; i < n; i++) /* loop n times */
	{
	for (j = 0; j < i; j++) /* loop i times */
	{
	_putchar(' '); /* print a space */
	}
	_putchar('\\'); /* print a backslash */
	_putchar('\n'); /* print a newline */
	}
	}
}

