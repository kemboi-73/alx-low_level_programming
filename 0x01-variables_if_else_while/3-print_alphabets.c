#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by uppercase
 * Return: 0 (success)
 */
int main(void)
{
char letter;

/* print lowercase letters */
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

/* print uppercase letters */
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}

