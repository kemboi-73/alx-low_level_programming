#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: is a pointer
 * @src: is a ponter
 * @n: this is the variable
 * Return: 0 if is s success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' && j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
