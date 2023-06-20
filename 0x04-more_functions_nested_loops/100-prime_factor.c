#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
	while (n % i == 0)
	{
	n /= i;
	}
	}

	printf("%ld\n", i - 1);

	return (0);
}

