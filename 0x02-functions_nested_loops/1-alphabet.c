#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar (lower);
	}
	_putchar('\n');
}
