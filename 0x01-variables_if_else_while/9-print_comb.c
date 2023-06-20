#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers 0 to 9, separated by ", ",
 * in ascending order using putchar function with only 4 calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');

if (i != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
