#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}
