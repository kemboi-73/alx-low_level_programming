#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50
 * Fibonacci numbers separated by comma and space
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long j = i, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++1;
	}
	printf("\n");
	return (0);
}
