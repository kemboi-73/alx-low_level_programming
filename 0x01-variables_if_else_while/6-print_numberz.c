#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * using putchar function, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}

putchar('\n');

return (0);
}

