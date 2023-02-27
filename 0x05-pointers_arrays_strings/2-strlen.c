#include <stdio.h>


/**
 * main - test the _strlen function
 *
 * Return: always 0
 */
int main(void)
{
	char *str = "My first strlen!";
	int len = _strlen(str);

	printf("Length of '%s': %d\n", str, len);
	return (0);
}
