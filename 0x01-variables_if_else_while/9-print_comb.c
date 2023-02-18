#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by ", ", in ascending order using putchar function
 * with only 4 calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar((i == 8 && j == 9) ? '\n' : ',');
putchar((i == 8 && j == 9) ? '\0' : ' ');
}
}

return (0);
}

