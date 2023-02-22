#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued numbers in
 * Fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;
	}

	printf("%ld\n", sum);


	return (0);
}
