#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line, using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}

putchar('\n');

return (0);
}

