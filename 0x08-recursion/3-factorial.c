#include <stdio.h>

/**
 * factorial - computes the factorial of a given number
 * @n: the number whose factorial to compute
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
	}
else if (n == 0)
{
return (1);
	}
	else
{
return (n * factorial(n - 1));
	}
}

