#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src, including the null byte,
 * to the buffer pointed to by dest.
 * @dest: Pointer to the buffer to copy the string to.
 * @src: Pointer to the string to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

	while (*(src + i))
{
	*(dest + i) = *(src + i);
	i++;
}

	*(dest + i) = '\0';

	return (dest);
}
