#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
int password[5];
int i, sum;

srand(time(0)); /* seed the random number generator with the current time */

	sum = 0;
	for (i = 0; i < 4; i++)
	{
	password[i] = rand() % 10; /* generate a random digit between 0 and 9 */
	sum += password[i];
	putchar('0' + password[i]); /* print the digit as a character */
	}

	password[4] = (sum % 10); /* calculate the last digit */
	putchar('0' + password[4]);

return (0);
}

