#include <stdio.h>
#include <unistd.h>

/**
 * main - A program that prints a line to the standard error
 * Return: 1 (Success)
 */

int main(void)
{
char *message = "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (1);
}

