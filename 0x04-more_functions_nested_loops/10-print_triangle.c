#include <stdio.h>

/**
 * print_triangle - Prints a triangle of a
 * given size using the _putchar function
 *
 * @size: The size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	putchar('\n');
}

	for (i = 0; i < size; i++)
{
	for (j = 0; j <= i; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
}

/**
 * main - Entry point
 *
 * Description: This program tests the print_triangle function by calling it
 * with various values of size.
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	print_triangle(2);
	print_triangle(4);
	print_triangle(6);
	print_triangle(0);

	return (0);
}

