#include "main.h"

/**
 * print_square - prints a square using the '#' character
 * @size: size of the square to be printed
 *
 * Return: void
 */
void print_square(int size)
{
		if (size <= 0) /* if size is less than or equal to 0 */
	{
		_putchar('\n'); /* print a newline */
	}
		else /* if size is greater than 0 */
	{
		int i, j;

	for (i = 0; i < size; i++) /* loop size times */
{
	for (j = 0; j < size; j++) /* loop size times */
	{
		_putchar('#'); /* print a '#' character */
	}
		_putchar('\n'); /* print a newline */
	}
	}
}

