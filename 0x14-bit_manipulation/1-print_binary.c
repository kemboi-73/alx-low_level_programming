#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 *
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(n) * 8 - 1;
	int printed = 0;

while (bits >= 0)
	{
if ((n >> bits) & mask)
	{
	_putchar('1');
	printed = 1;
	}
else if (printed)
_putchar('0');

	bits--;
	}

if (!printed)
_putchar('0');
}


