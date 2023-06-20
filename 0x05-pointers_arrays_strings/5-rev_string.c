#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* find length of the string */
	while (s[len] != '\0')
	len++;

	/* reverse the string */
	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}

