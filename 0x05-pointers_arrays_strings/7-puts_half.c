#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 *
 * Return: void
 */
void puts_half(char *str)
{
		int len = strlen(str);
	int i;

	if (len % 2 == 0)
	{
	for (i = len / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	}
		else
	{
	for (i = (len + 1) / 2; i < len; i++)
	{
	putchar(str[i]);
	}
	}

	putchar('\n');
}
