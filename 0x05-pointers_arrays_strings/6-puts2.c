#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2;
    }

    putchar('\n');
}

