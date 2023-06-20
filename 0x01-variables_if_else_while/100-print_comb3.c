#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * separated by ", ", in ascending order using putchar function
 * with only 4 calls, limited to numbers 0 to 9.
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
if (i == 8 && j == 9)
{
putchar('\n');
return (0);
}
putchar(',');
putchar(' ');
}
}

return (0);
}


