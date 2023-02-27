#include <stdio.h>

void reset_to_98(int *n);

/**
 * main - tests the reset_to_98 function
 *
 * Return: 0
 */
int main(void)
{
	int n = 402;

	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);

	return (0);
}

/**
 * reset_to_98 - updates the value of the integer passed to 98
 *
 * @n: pointer to the integer to be updated
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}

