#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer value of string.
 */

int _atoi(char *s)
{
int i = 0, sign = 1, result = 0, found = 0;

	while (s[i])
	{
	if (s[i] == '-')
	{
	sign *= -1;
}
	if (s[i] >= '0' && s[i] <= '9')
	{
	found = 1;
	result = result * 10 + (s[i] - '0');
	}
	else if (found)
{
	break;
	}
	i++;
}

return (result * signi);
}

