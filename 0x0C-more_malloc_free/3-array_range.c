#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}

	return (s);
}
