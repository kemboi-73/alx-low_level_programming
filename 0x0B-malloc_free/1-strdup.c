#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != 0)
		i++;
	i++;
	newstr = malloc(sizeof(char) * i);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		newstr[i] = str[i];
	newstr[i] = 0;
	return (newstr);
}
