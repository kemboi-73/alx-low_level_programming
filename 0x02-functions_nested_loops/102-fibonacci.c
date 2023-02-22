#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	unsigned long n1 = 0, n2 = 1, n3;

	for (x = 0; x < 50; x++)
	{
	n3 = n1 + n2;
	printf("%lu", n3);
	n1 = n2;
	n2 = n3;

	if (x == 49)
	printf("\n");
	else
printf(", ");

}


	return (0);

}
