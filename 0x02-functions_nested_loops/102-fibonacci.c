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
int count, i;
long int fib1 = 1, fib2 = 2, fib_next;

printf("%ld, %ld", fib1, fib2);

for (count = 3; count <= 50; count++)
{
fib_next = fib1 + fib2;
printf(", %ld", fib_next);
fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}

